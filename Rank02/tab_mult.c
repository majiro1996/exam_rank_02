#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

int ft_atoi(char *s)
{
	int c = 0;
	int nbr = 0;
	while(s[c])
	{
		nbr += s[c] - '0';
		if (s[c + 1])
			nbr *= 10;
		c++;
	}
	return(nbr);
}

void ft_putnbr(int nbr)
{
	if(nbr/10 > 0)
		ft_putnbr(nbr/10);
	ft_putchar(nbr % 10 + '0');
}

int main(int argc, char **argv)
{
	int c = 1;
	if(argc > 1)
	{
		while(c <= 9)
		{
			ft_putnbr(c);
			write(1," x ", 3);
			ft_putnbr(ft_atoi(argv[1]));
			write(1, " = ", 3);
			ft_putnbr(c * ft_atoi(argv[1]));
			ft_putchar('\n');
			c++;
		}
	}
	else
		ft_putchar('\n');
}
