#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t c = 0;
	size_t k = 0;

	while(s[c])
	{
		k = 0;
		while(reject[k])
		{
			if(s[c] == reject[k])
				return(c);
			k++;
		}
		c++;
	}
	return(c);
}
