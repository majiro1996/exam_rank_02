#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void	print_bits(unsigned char octet)
{
	int c = 7;
	int bit;
	
	while(c >= 0)
	{
		bit = ((octet >> c) & 1) + '0';
		ft_putchar(bit);
		c--;
	}
}

int	main(void)
{
	print_bits(0);
	ft_putchar('\n');
	print_bits(1);
	ft_putchar('\n');
	print_bits(2);
	ft_putchar('\n');
	print_bits(3);
	ft_putchar('\n');
	print_bits(42);
	ft_putchar('\n');
	print_bits(69);
	ft_putchar('\n');
	return (0);
}
