#include <stdlib.h>
#include <stdio.h>

int ft_absolute_value(int nbr)
{
	if (nbr < 0)
		nbr *= -1;
	return(nbr);
}

int *ft_range(int start, int end)
{
	int c = 0;
	int *result;
	int len;

	len = ft_absolute_value(end - start);
	result = malloc(sizeof(int) * len + 1);
	if(!result)
		return(NULL);
	while(start >= end)
	{
		result[c] = start;
		start--;
		c++;
	}
	while(start <= end)
	{
		result[c] = start;
		start++;
		c++;
	}
	return(result);
}


int main(int argc, char **argv)
{	
	if(argc != 3)
		return (0);
	int i = 0;
	int start = atoi(argv[1]);
	int end = atoi(argv[2]);
	int *str = ft_range(start, end);
	int len = ft_absolute_value(end - start) + 1;

	while (i < len)
	{
		printf("[%i]", str[i]);
		i++;
	}
	printf("\n");
}
