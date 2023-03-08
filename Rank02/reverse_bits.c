#include <unistd.h>
void print_bits(unsigned char octet)
{
	int c = 7;
	char bit = 0;
	while(c >= 0)
	{
		bit = ((octet >> c) & 1) + '0';
		write(1, &bit, 1);
		c--;
	}
}

unsigned char reverse_bits(unsigned char octet)
{
	int c = 0;
	unsigned char result = 0;
	while(c < 8)
	{
		result = (result << 1) | (octet);
		octet = octet >> 1;
		c++;
	}
	return (result);
}

int main(void)
{
	print_bits(2);
	write(1, "\n", 1);
	print_bits(reverse_bits(2));
}
