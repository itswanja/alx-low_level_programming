#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n < 56; n++)
	{
		for (m = 49; m <= 56; m++)
		{
			if (m != n)
			{
				putchar(m);
				putchar(n);
				if (n == 56 && m == 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
