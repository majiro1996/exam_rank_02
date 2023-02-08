/*Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);
DESCRIPTION
       The  strpbrk() function locates the first occurrence in the string s of
       any of the bytes in the string accept.

RETURN VALUE
       The strpbrk() function returns a pointer to the byte in s that  matches
       one of the bytes in accept, or NULL if no such byte is found.
*/
#include <stdio.h> //for NULL
#include <stdlib.h> //for NULL
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	c;
	int	k;

	c = 0;
	while (s1[c])
	{
		k = 0;
		while (s2[k])
		{
			if (s1[c] == s2[k])
				return ((char *)&s1[c]);
			k++;
		}
	}
	return (NULL);
}
