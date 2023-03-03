#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int x;
	int i;
	int result;
	int high;
	int c;
	
	c = 1;
	if (argc == 3)
	{
		x = atoi(argv[1]);
		i = atoi(argv[2]);
		if (x > i)
			high = x;
		else
			high = i;
		if (x == 0 || i == 0)
		{
			printf("0\n");
			return(0);
		}
		while (c <= high)
		{
			if ((x % c) == 0 && (i % c) == 0)
				result = c;
			c++;
		}
		printf("%d", result);
	}
	
	printf("\n");
}
