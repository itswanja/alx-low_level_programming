#include "main.h"
/**
 * _isupper - Checks if a letter is uppercase
 * @c: Character to be tested
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c);
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

