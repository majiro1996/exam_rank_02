/*Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>*/

#include <unistd.h>

void	print_last(char *str)
{
	int	c;
	int	last;

	c = 0;
	while (str[c])
	{
		if (str[c] == ' ' && str[c + 1] != ' ' && str[c + 1] != '\0')
			last = c + 1;
		c++;
	}
	while (str[last] && str[last] > ' ')
	{
		write(1, &str[last], 1);
		last++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_last(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
