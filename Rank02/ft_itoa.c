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
	long lnaux;
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
	lnaux = nbr;
	if(nbr < 0)
	{
		result[0] = '-';
		lnaux *= nbr * -1;
	}
	while(len >= 0 && lnaux)
	{
		result[len] = (lnaux % 10) + '0';
		lnaux = lnaux / 10;
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
