/*Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
DESCRIPTION
     The strspn() function spans the initial part of the null-terminated string s as long as the
     characters from s occur in the null-terminated string charset.  In other words, it computes
     the string array index of the first character of s which is not in charset, else the index of
     the first null character.

     The strcspn() function spans the initial part of the null-terminated string s as long as the
     characters from s do not occur in the null-terminated string charset (it spans the complement
     of charset).  In other words, it computes the string array index of the first character of s
     which is also in charset, else the index of the first null character.

RETURN VALUES
     The strspn() and strcspn() functions return the number of characters spanned.*/
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	c;
	int k;

	c = 0;
	k = 0;
	while (s[c])
	{
		k = 0;
		while (reject[k])
		{
			if (s[c] == reject[k])
				return (c);
			k++;
		}
		c++;
	}
	return (c);
}
