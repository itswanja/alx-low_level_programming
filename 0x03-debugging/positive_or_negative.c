#include "main.h"
/**
 * positive_or_negative - Tests for positive and negative numbers
 * @i: Number to be tested
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
