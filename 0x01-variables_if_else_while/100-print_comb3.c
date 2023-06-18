#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n < 57; n++)
	{
		for (m = n + 1; m < 58; m++)
		{
			putchar(n % 10) + 48;
			putchar(m % 10) + 48;
			if (n == 56 && m == 57)
				putchar(',');
				putchar(' ');
		}
	putchar('\n');
	}
	return (0);
}
