#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	int result = 1;
	int c = 1;
	if (!a || !b)
		return(0);
	while(result < a || result < b)
	{
		if(c  % a == 0 && c % b == 0)
			return(c);
		c++;
	}
	return (0);
}
