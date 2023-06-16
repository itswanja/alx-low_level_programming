#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * followed by  new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 122;
	while ( c >= 97)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
