#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int c = 1;
	if (!a || !b)
		return(0);
	while(1)
	{
		if(c  % a == 0 && c % b == 0)
			return(c);
		c++;
	}
	return (0);
}
