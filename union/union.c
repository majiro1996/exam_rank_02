#include <unistd.h>

int ft_nodup(int c,char a, char *str)
{
	c--;
	while(c >= 0)
	{
		if (str[c] == a)
			return(0);
		c--;
	}
	return(1);
}
int main(int argc, char **argv)
{
	int c = 0;
	int k = 0;

	if (argc == 3)
	{
		while(argv[1][c])
		{
			if (ft_nodup(c, argv[1][c], argv[1]))
				write(1, &argv[1][c], 1);
			c++;
		}
		while(argv[2][k])
		{
			if (ft_nodup(c, argv[2][k], argv[1]) && ft_nodup(k, argv[2][k], argv[2]))
				write(1, &argv[2][k], 1);
			k++;
		}	
	}
	write(1, "\n", 1);
}
