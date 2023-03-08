#include <stdio.h>
#include <stdlib.h>

int is_prime(int nbr)
{
	int c = 2;

	if (nbr <= 1)
		return(0);
	while(c < nbr)
	{
		if(nbr % c == 0)
			return (0);
		c++;
	}
	return(1);
}

void fprime(int nbr)
{
	int c = 2;
	int aux = nbr;
	if(nbr == 1)
		printf("1");
	while(c <= nbr)
	{
		if(nbr % c == 0 && is_prime(c))
		{
			printf("%d", c);
			if(c != nbr)
				printf("*");
			nbr = nbr / c;
			c = 2;
		}
		c++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		fprime(atoi(argv[1]));
	}
	printf("\n");
}
