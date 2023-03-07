#include <stdlib.h>
#include <stdio.h>

int is_space(char a)
{
	if (a == ' ' || a == '\t' || a == '\n')
		return (1);
	else
		return (0);
}

int ft_word_count(char *str)
{
	int c = 0;
	int word = 0;

	while(str[c])
	{
		if(!is_space(str[c]) && (is_space(str[c + 1]) || !str[c + 1]))
			word++;
		c++;
	}
	return (word);
}
char *ft_fill_word(int word_n, char *str)
{	
	char *word;
	int c = 0;
	int w = 0;
	int aux = 0;

	while(str[c] && w < word_n)
	{
		if (!is_space(str[c]) && (is_space(str[c + 1]) || !str[c + 1]))
			w++;
		c++;
	}
	while(is_space(str[c]))
		c++;
	aux = c;
	while(!is_space(str[c]))
		c++;
	word = malloc(sizeof(char) * (c - aux) + 1);
	c = 0;
	while(!is_space(str[aux]) && str[aux])
	{
		word[c] = str[aux];
		c++;
		aux++;
	}
	word[c] = '\0';
	return(word);
}

char **ft_split(char *str)
{
	int c = 0;
	char **result;
	int word_c = ft_word_count(str);
	printf("%d\n", word_c);
	result = malloc(sizeof(char *) * word_c + 1);
	result[word_c] = NULL;
	while(c < word_c)
	{
		result[c] = ft_fill_word(c, str);
		c++;
	}
	return(result);
}

int  main(void)
{
	int c = 0;
	char *arr = "   Hola holita  \n  vecinito, jorobate flanders, jorobate flanders";
	char **m;

	m = ft_split(arr);
	while(m[c])
	{
		printf("%s\n", m[c]);
		c++;
	}
}
