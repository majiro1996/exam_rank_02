#include <unistd.h>

int main(int argc, char **argv)
{
	int c = 0;
	int sp = 0;

	if (argc == 2)
	{	while (argv[1][c])
		{
			if ((argv[1][c] != ' ' && argv[1][c] != '\t') && (argv[1][c + 1] == ' ' || argv[1][c + 1] == '\t'))
				sp++;
			if ((argv[1][c] == ' ' || argv[1][c] == '\t') && (argv[1][c + 1] == '\0'))
				sp--;
			c++;
		}
		c = 0;
		while (argv[1][c])
		{
			if (argv[1][c] != ' ' && argv[1][c] != '\t')
			{
			   	write(1, &argv[1][c], 1);
				if ((argv[1][c + 1] == '\t' || argv[1][c + 1] == ' ') && sp != 0)
				{
					sp--;
					write(1, "   ", 3);
				}
			}
			c++;
		}
	}
	write(1, "\n", 1);
}
