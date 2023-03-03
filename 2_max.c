/*Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.*/

int	max(int *tab, unsigned int len)
{
	int	result;
	int	c;

	result = tab[0];
	c = 0;
	while (c < len)
	{
		if (tab[c] > result)
			result = tab[c];
		c++;
	}
	return (result);
}
