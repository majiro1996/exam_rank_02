#include <stdlib.h>

int is_space(char a)
{
	if (a == ' ' || a == '\t' || a == '\n')
		return(1);
	return(0);
}

char *fill(char *s, int **ptr_c)
{
	char *result;
	int  c = **ptr_c;
	int len = 0;
	int k = 0;
	while(is_space(s[c]))
		c++;
	while(s[c] && !is_space(s[c]))
	{
		len++;
		c++;
	}
	result = malloc(sizeof(char) * len + 1);
	if(!result)
		return (NULL);
	result[len] = '\0';
	c = c -len;
	while(k < len)
	{
		result[k] = s[c];
		k++;
		c++;
	}
	c++;
	**ptr_c = c;
	return (result);
}

char    **ft_split(char *str)
{
	int wc = 0;
	int c = 0;
	char **m;
	int current = 0;
	while(str[c])
	{
		if(!is_space(str[c]) && (is_space(str[c + 1]) || !str[c + 1]))
			wc++;
		c++;
	}
	m = malloc(sizeof(char *) * wc + 1);
	if(!m)
		return(NULL);
	m[wc + 1]=NULL;
	c = 0;
	int *ptr_c = &c;
	while(current <= wc)
	{
		m[current] = fill(str, &ptr_c);
		current++;
	}
	return (m);
}

#include <stdio.h>

int	main(void)
{
	int		idx;
	char	**tab;

	idx = 0;
	tab = ft_split("   hola    holita   vecinito    ");
	while (idx < 3)
	{
		printf("String %d : %s\n", idx, tab[idx]);
		idx++;
	}
	return (0);
}
