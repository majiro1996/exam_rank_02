#include <stdlib.h>

long ft_nbrlen(int nbr)
{
	long c = 0;
	if (nbr < 0)
	{
		c++;
		nbr *= -1;
	}
	if (nbr == 0)
		return(1);
	while (nbr)
	{
		nbr /= 10;
		c++;
	}
	return(c);
}

char *ft_itoa(int nbr)
{
	long len = ft_nbrlen(nbr);
	char *result;
	result = malloc(sizeof(char) * len);
	if(!result)
		return(NULL);
	result[len] = '\0';
	len--;
	if(nbr == 0)
	{
		result[0] = '0';
		return(result);
	}
	if(nbr < 0)
	{
		if(nbr == -2147483648)
		{
			result = "-2147483648";
			return (result);
		}
		result[0] = '-';
		nbr *= -1;
	}
	while(len >= 0 && nbr)
	{
		result[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	return(result);
}

#include <limits.h>
#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_itoa(INT_MAX));
	printf("%s\n", ft_itoa(INT_MIN));
	printf("%s\n", ft_itoa(+83));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(75744));
	printf("%s\n", ft_itoa(1));
}
