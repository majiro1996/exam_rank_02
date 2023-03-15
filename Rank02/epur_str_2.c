#include <unistd.h>

int ft_is_space(char a)
{
	if (a == ' ' || a == '\t')
		return(1);
	return(0);
}

void ft_putchar(char a)
{
	write(1, &a, 1);
}

int ft_wordc(char *s)
{
	int c = 0;
	int w = 0;
	while(s[c])
	{
		if (!ft_is_space(s[c]) && ft_is_space(s[c + 1]))
			w++;
		if (ft_is_space(s[c]) && s[c + 1] == '\0')
			w--;
		c++;
	}
	return(w);
}

void ft_epur(char *str)
{
	int c = 0;
	int w = ft_wordc(str);
	while(str[c])
	{
		if (!ft_is_space(str[c]))
		{
			ft_putchar(str[c]);
			if (ft_is_space(str[c + 1])  && w > 0)
			{
				write(1 , " ", 1);
				w--;
			}
		}
		c++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		ft_epur(argv[1]);
	}
	ft_putchar('\n');
}
