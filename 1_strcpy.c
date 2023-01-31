/*Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);*/

char	*ft_strcpy(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] && s2[c])
	{
		s1[c] = s2[c];
		c++;
	}
	s1[c] = '\0';
	return (s1);
}
/*
int main (void)
{
	char *a = "hola holita";
	char *b = "aaaaaaaaaa";
	
}
*/