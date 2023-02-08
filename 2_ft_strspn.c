/*Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);
DESCRIPTION
       The  strspn()  function calculates the length (in bytes) of the initial
       segment of s which consists entirely of bytes in accept.

       The strcspn() function calculates the length of the initial segment  of
       s which consists entirely of bytes not in reject.
*/

#include <stdio.h> //size_t
size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	c;
	size_t	k;

	c = 0;
	while (s[c])
	{
		k = 0;
		while (accept[k])
		{
			if (s[c] != accept[k])
				return (c);
			k++;
		}
		c++;
	}
}
