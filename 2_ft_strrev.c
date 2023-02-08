/*Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
*/

char	*ft_strrev(char *str)
{
	char	aux;
	int		c;
	int		len;

	c = 0;
	len = 0;
	while (str[len])
		len++;
	while (c < (len / 2))
	{
		aux = str[c];
		str[c] = str[len - 1 - c];
		str[len - 1 - c] = aux;
		c++;
	}
	return (str);
}
