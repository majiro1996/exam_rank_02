#include <unistd.h>
 
void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_to_snake(char *str)
{
	int c = 0;

	while(str[c])
	{

		ft_putchar(str[c]);
		if (str[c + 1] >= 'A' && str[c + 1] <= 'Z')
		{
			ft_putchar('_');
			str[c + 1] += 32;
		}
		c++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_to_snake(argv[1]);
	}
	ft_putchar('\n');
}
