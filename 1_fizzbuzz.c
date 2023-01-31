/*Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>*/

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	put_nbr(int nbr)
{
	if (nbr < 0)
	{
		put_nbr(nbr / 10);
		ft_putchar((nbr % 10) * -1 + '0');
	}
	else if (nbr > 0)
	{
		put_nbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
}

int	main(void)
{
	int	c;

	c = 1;
	while (c <= 100)
	{
		if (c % 3 == 0)
			write(1, "fizz", 4);
		if (c % 5 == 0)
			write(1, "buzz", 4);
		if (c % 3 != 0 && c % 5 != 0)
			put_nbr(c);
		write(1, "\n", 1);
		c++;
	}
}
