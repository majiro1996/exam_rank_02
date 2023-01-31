/*Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	k;

	c = 0;
	k = 0;
	if (argc == 2)
	{
		while (argv[1][c])
		{
			if (argv[1][c] >= 'a' && argv[1][c] <= 'z')
			{
				k = -1;
				while (k < argv[1][c] - 'a')
				{
					write (1, &argv[1][c], 1);
					k++;
				}
			}
			if (argv[1][c] >= 'A' && argv[1][c] <= 'Z')
			{
				k = -1;
				while (k < argv[1][c] - 'A')
				{
					write (1, &argv[1][c], 1);
					k++;
				}
			}
			c++;
		}
	}
	write(1, "\n", 1);
}
