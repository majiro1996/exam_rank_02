#include <stdlib.h>

int *ft_range(int start, int end)
{
	int len;
	int *array;

	len = start - end;
	if (len < 0)
		len = len * -1;
	array = malloc(sizeof(int) * (len));
	if (array == NULL)
		return (NULL);
	len = 0;
	while(start >= end)
	{	array[len] = start;
		start --;
		len ++;
	}
	while(start <= end)
	{
		array[len] = start;
		start ++;
		len ++;
	}
	return (array);
}
