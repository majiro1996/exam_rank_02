/*Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);

DESCRIPTION
     The strcmp() and strncmp() functions lexicographically compare the null-terminated strings s1
     and s2.

     The strncmp() function compares not more than n characters.  Because strncmp() is designed for
     comparing strings rather than binary data, characters that appear after a `\0' character are
     not compared.

RETURN VALUES
     The strcmp() and strncmp() functions return an integer greater than, equal to, or less than 0,
     according as the string s1 is greater than, equal to, or less than the string s2.  The compar-
     ison is done using unsigned characters, so that `\200' is greater than `\0'.*/


int	ft_strcmp(char *s1, char *s2)
{
	int c;

	c = 0;
	while (s1[c] && s2[c] && s1[c] == s2[c])
		c++;
	return(s1[c] - s2[c]);
}