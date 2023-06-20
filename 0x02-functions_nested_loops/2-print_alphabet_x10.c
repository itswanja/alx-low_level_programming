#include "main.h"
/**
 *print_alphabet_x10 - Print alphabet x10 times
*/
void print_alphabet_x10(void)
{
	char c;

	int j = 0;

	while (j <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
			_putchar('\n');
			j++;
	}
}
