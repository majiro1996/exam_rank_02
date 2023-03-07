/*Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);*/

int	is_power_of_2(unsigned int n)
{
	int	c;

	c = 1;
	while (c <= n)
	{
		if (c == n)
			return (1);
		c *= 2;
	}
	return (0);
}
