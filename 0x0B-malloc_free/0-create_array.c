#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char
 * Return: Array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	if (size == 0)
		return (NULL);
	j = malloc(size * sizeof(char));

	if (j == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		j[i] = c;
	}
	return (j);
}
