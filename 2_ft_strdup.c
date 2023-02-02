/*Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
DESCRIPTION
     The strdup() function allocates sufficient memory for a copy of the string s1, does the copy,
     and returns a pointer to it.  The pointer may subsequently be used as an argument to the func-
     tion free(3).

     If insufficient memory is available, NULL is returned and errno is set to ENOMEM.

     The strndup() function copies at most n characters from the string s1 always NUL terminating
     the copied string.*/

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		c;
	char	*copy;

	c = 0;
	while (src[c])
		c++;
	copy = malloc(c + 1);
	if (copy == NULL)
		return (copy);
	c = 0;
	while (src[c])
	{
		copy[c] = src[c];
		c++;
	}
	copy[c] = '\0';
	return (copy);
}

int	main(void)
{
	char *a = "hola caracola";
	printf( "%s", ft_strdup(a));
}
