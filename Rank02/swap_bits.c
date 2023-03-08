#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_print_bits(unsigned char octet)
{
	int c = 7;
	unsigned char bit;

	while(c >= 0)
	{
		bit = ((octet >> c) & 1) + '0';
		ft_putchar(bit);
		c--;
	}
}

unsigned char ft_swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}

unsigned char ft_reverse_bits(unsigned char octet)
{
	int c = 0;
	unsigned char rev = 0;

	while(c <= 7)
	{
		// Shift the current value of rev left by one bit, and set the
        // rightmost bit to the current bit of the input byte
		rev = (rev << 1) | (octet & 1);
		// Shift the input byte right by one bit, to get the next bit
		octet = octet >> 1;
		c++;
	}
	return(rev);
}

int main(void)
{
	ft_print_bits(1);
	ft_putchar('\n');
	ft_print_bits(ft_swap_bits(1));
	ft_putchar('\n');
	ft_print_bits(ft_reverse_bits(1));
}
