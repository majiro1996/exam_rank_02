/*Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Writde a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$*/

#include <unistd.h> //write

int	no_dup(char *s, char t, int c)
{
	c--;
	while (c >= 0)
	{
		if (t == s[c])
			return (1);
		c--;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	c;
	int	k;

	if (argc == 3)
	{
		c = 0;
		while (argv[1][c])
		{
			k = 0;
			while (argv[2][k])
			{
				if ((argv[1][c] == argv[2][k]) && !(no_dup(argv[1], argv[1][c], c)))
				{
					write(1, &argv[1][c], 1);
					break ;
				}
				k++;
			}
			c++;
		}
	}
	write(1, "\n", 1);
}
