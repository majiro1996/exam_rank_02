#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nbr)
{
	int c = 2;
	
	if (nbr <= 1)
		return (0);
	while(c < nbr)
	{
		if(nbr % c == 0)
			return (0);
		c++;
	}
	return(1);
}

void ft_putnbr(int nbr)
{
	char *base = "0123456789";
	
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	write(1, &base[nbr % 10], 1);
}

int ft_atoi(char *s)
{
	int result = 0;
	int c = 0;

	while(s[c])
	{
		result += s[c] - '0';
		if (s[c + 1])
			result *= 10;
		c++;
	}
	return(result);
}

int ft_add_prime(int nbr)
{
	int c = 0;
	int sum = 0;
	while(c <= nbr)
	{
		if(ft_is_prime(c))
			sum += c;
		c++;
	}
	return (sum);
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putnbr(ft_add_prime(ft_atoi(argv[1])));		
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
