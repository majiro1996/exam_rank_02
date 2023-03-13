#include <stdlib.h>
#include <stdio.h>

int ft_absolute_value(int nbr)
{
	if(nbr < 0)
		return(-nbr);
	return(nbr);
}

int     *ft_rrange(int start, int end)
{
	int *array;
	int len = ft_absolute_value(end-start);
	int c = 0;
	
	array = malloc(sizeof(int) * len + 1);
	if (!array)
		return(NULL);
	while(end >= start)
	{
		array[c] = end;
		end--;
		c++;
	}
	while(end <= start)
	{
		array[c] = end;
		end++;
		c++;
	}
	return(array);
}
/*
int main(int argc, char **argv)
{	
	if(argc != 3)
		return (0);
	int i = 0;
	int start = atoi(argv[1]);
	int end = atoi(argv[2]);
	int *str = ft_rrange(start, end);
	int len = ft_absolute_value(end - start) + 1;

	while (i < len)
	{
		printf("[%i]", str[i]);
		i++;
	}
	printf("\n");
}
*/
