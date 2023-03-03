#include <unistd.h>

int main(int argc, char **argv)
{
	int c;

	c = 0;
	if (argc == 2)
	{
		while (argv[1][c])
		{
			if (argv[1][c] >= 'a' && argv[1][c] <= 'z')
				argv[1][c] -= ('a' - 'A');
			else if (argv[1][c] >= 'A' && argv[1][c] <= 'Z')
				argv[1][c] += ('a' - 'A');
			write(1, &argv[1][c], 1);
			c++;
		}
	}
	write(1, "\n", 1);
}
