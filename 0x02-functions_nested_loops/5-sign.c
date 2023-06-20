#include "main.h"
/**
 * print_sign - Prints sign of a number
 * @n: Number to be checked
 * Return: 1 for positive num, -1 for negative num or zero otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(n);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(n);
		return (-1);
	}
	else
	{
		_putchar(n);
		return (0);
	}
}
