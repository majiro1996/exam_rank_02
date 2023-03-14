#include <unistd.h>

void ft_putchar(char a, int c)
{
	while(c > 0)
	{
		write(1, &a, 1);
		c--;
	}
}

void ft_repeat_alpha(char *str)
{
	int c = 0;

	while(str[c])
	{
		if(str[c] >= 'a' && str[c] <= 'z')
			ft_putchar(str[c], str[c] - 'a');
		 if(str[c] >= 'A' && str[c] <= 'Z')
			ft_putchar(str[c], str[c] - 'A' + 1);
		else
			ft_putchar(str[c], 1);
		c++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		ft_repeat_alpha(argv[1]);
	}
	ft_putchar('\n', 1);
}
