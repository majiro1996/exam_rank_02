#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
	int c = 0;

	while(s[c])
		c++;
	return(c);
}

int is_space(char a)
{
	if(a == ' ' || a == '\t')
		return(1);
	else
		return(0);
}

void ft_putword(char *s, int c)
{
	while(s[c] && !is_space(s[c]))
	{
		write(1, &s[c], 1);
		c++;
	}
}
int ft_cspace(char *s)
{
	int c = 0;
	int sp = 0;
	while(s[c])
	{
		if(is_space(s[c]))
			sp++;
		c++;
	}
	return(sp);
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int len = ft_strlen(argv[1]);
		len--;
		int sp = ft_cspace(argv[1]);
		while(len >= 0)
		{
			while(is_space(argv[1][len]) && len >= 0)
				len--;
			while(!is_space(argv[1][len]) && len >= 0)
				len--;
			len++;
			ft_putword(argv[1], len);
			if(sp > 0)
			{
				write(1, " ", 1);
				sp--;
			}
			len-=1;
		}
	}
	write(1, "\n", 1);
	return(0);
}
