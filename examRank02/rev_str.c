#include <unistd.h>
int is_space(char a);

void put_word(char *str, int c, int end)
{
	while(c <= end)
	{	
		if(!is_space(str[c]))
			write(1, &str[c], 1);
		c++;
	}
}

int is_space(char a)
{
	if (a == 32 || a == '\t')
		return(1);
	else
		return(0);
}

 int main(int argc, char **argv)
{
	int c = 0;
	int e = 0;
	int s = 0;
	int es = 0;

	if (argc == 2)
	{
		while (argv[1][c])
		{
			if (is_space(argv[1][c]))
				es++;
			c++;
		}
		while(c >= 0)
		{
			if ((argv[1][c] == '\0' || is_space(argv[1][c])) && c > 0)
				c--;
			e = c;
			while (!is_space(argv[1][c]) && c > 0)
				c--;
			s = c;
			if (!is_space(argv[1][s] && c > 0))
					put_word(argv[1], s, e);
			if (es > 0)
				write(1, " ", 1);
			c--;
			es--;
		}
	}
	write(1, "\n", 1);
}
