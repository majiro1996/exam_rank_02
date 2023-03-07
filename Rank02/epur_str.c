#include <unistd.h>

int main(int argc, char **argv)
{
	int c = 0;
	int es = 0;

	if (argc == 2)
	{
		while(argv[1][c])
		{
			if (argv[1][c] != ' ' && argv[1][c + 1] == ' ')
				es++;
			if (argv[1][c] == ' ' && argv[1][c + 1] == '\0')
				es--;
			c++;
		}
		c = 0;
		while(argv[1][c])
		{
			if(argv[1][c] != ' ')
			{
				write(1, &argv[1][c], 1);
				if (argv[1][c + 1] == ' ' && es > 0)
				{
					write(1, " ", 1);
					es--;
				}
			}
			c++;
		}
	}
	write(1, "\n", 1);
}
