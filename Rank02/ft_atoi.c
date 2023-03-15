
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int c = 0;
	int nbr = 0;
	int sign = 1;
	
	while(str[c] == ' ' || str[c] == '\t' || str[c] == '\n' || str[c] == '\r' || str[c] == '\v' || str[c] == '\f')
		c++;
	if(str[c] == '-')
	{
		sign *= -1;
		c++;
	}
	else if(str[c] == '+')
		c++;
	while(str[c] && (str[c] >= '0' && str[c] <= '9'))
	{
		nbr *= 10;
		nbr += str[c] - '0';
		c++;
	}
	return(nbr * sign);
}
/*
int main(void)
{
	printf("%d\n",ft_atoi("   +12345ia6789"));
	printf("%d\n", ft_atoi("-123456789"));
}
*/
