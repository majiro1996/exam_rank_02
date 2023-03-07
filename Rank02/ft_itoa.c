#include <stdlib.h>
#include <stdio.h>

int n_len(int nbr)
{
	int c = 0;

	if (nbr < 0)
	{
		nbr *= -1;
		c++;
	}
	if (nbr == 0)
		return(1);
	while(nbr)
	{
		nbr /= 10;
		c++;
	}
	return(c);
}

char *ft_itoa(int nbr)
{
	int len;
	char *str;
	len = n_len(nbr);
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (nbr == 0)
	{
		str[0] = '0';
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while(nbr)
	{
		str[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	return (str);
}
		

int main(void)
{
	printf("%s", ft_itoa(-42));
}
