#include <unistd.h>

int ft_is_space(char a)
{
	if(a == ' ' || a == '\t')
		return(1);
	return(0);
}

void ft_putchar(char a)
{
	write(1, &a, 1);
}

int ft_sc(char *s)
{
	int c = 0;
	int sc = 0;

	while(s[c])
	{
		if (!ft_is_space(s[c]) && ft_is_space(s[c + 1]))
			sc++;
		if (ft_is_space(s[c]) && s[c + 1] == '\0')
			sc--;
		c++;
	}
	return (sc);
}

void ft_expand(char *s)
{
	int c = 0;
	int sc = ft_sc(s);

	while(s[c])
	{	
		if(!ft_is_space(s[c]))
		{
			ft_putchar(s[c]);
			if(ft_is_space(s[c + 1]) && sc > 0)
			{
				write(1, "   ", 3);
				sc--;
			}
		}
		c++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		ft_expand(argv[1]);
	}
	write(1, "\n", 1);
}
