#include <unistd.h>

int ft_is_space(char a)
{
	if (a == ' ' || a == '\t')
		return (1);
	else
		return(0);
}

int main(int argc, char **argv)
{
	int first;
	int c;

	first = 0;
	c = 0;
	if (argc >= 2)
	{
		while(ft_is_space(argv[1][c]) && argv[1][c])
			c++;
		first = c;
		while(!ft_is_space(argv[1][c]) && argv[1][c])
			c++;
		while(argv[1][c])
		{
			if (!ft_is_space(argv[1][c]))
			{
					write(1, &argv[1][c], 1);
					if (ft_is_space(argv[1][c + 1]) || argv[1][c + 1] == '\0')
						write(1, " ", 1);
			}
			c++;
		}
		while(argv[1][first] && !ft_is_space(argv[1][first]))
		{
			write(1, &argv[1][first], 1);
			first++;	
		}
	}
	write(1, "\n", 1);
}
