/*Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		c;
	char	aux;

	c = 0;
	if (argc == 2)
	{
		while (argv[1][c])
		{
			if (argv[1][c] >= 'a' && argv[1][c] <= 'm')
				aux = argv[1][c] + 13;
			else if (argv[1][c] > 'm' && argv[1][c] <= 'z')
				aux = argv[1][c] - 13;
			else if (argv[1][c] >= 'A' && argv[1][c] <= 'M')
				aux = argv[1][c] + 13;
			else if (argv[1][c] > 'M' && argv[1][c] <= 'Z')
				aux = argv[1][c] - 13;
			else
				aux = argv[1][c];
			write (1, &aux, 1);
			c++;
		}
	}
	write (1, "\n", 1);
}
