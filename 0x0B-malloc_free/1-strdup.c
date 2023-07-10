#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Duplicate a string
 * @str: string
 * Return: duplicated string
 */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *c;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	c = malloc((sizeof(char) * i) + 1);
	if (c == NULL)
		return (NULL);
	while (a < i)
	{
		c[a] = str[a];
		a++;
	}
	c[a] = '\0';
	return (c);
}
