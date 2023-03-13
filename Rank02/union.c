#include <unistd.h>

int ft_strlen(char *s)
{
	int c = 0;
	while(s[c])
		c++;
	return(c);
}

void ft_putchar(char a)
{
	write(1, &a, 1);
}

int ft_dup(char *s, int c, char a)
{
	c--;
	while(c > 0)
	{
		if(s[c] == a)
			return(1);
		c--;
	}
	return(0);
}

void ft_union(char *s1, char *s2)
{
	int c = 0;

	while(s1[c])
	{
		if (!ft_dup(s1, c, s1[c]))
			ft_putchar(s1[c]);
		c++;
	}
	c = 0;
	while(s2[c])
	{
		if (!ft_dup(s1, ft_strlen(s1), s2[c]) && !ft_dup(s2, c, s2[c]))
			ft_putchar(s2[c]);
		c++;
	}
}

int main(int argc, char **argv)
{	
	if (argc == 3)
	{
		ft_union(argv[1],argv[2]);
	}
	ft_putchar('\n');
}
