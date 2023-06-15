#include <stdio.h>
/**
 * main - A program that prints size of various types on the computer
 * Return: 0 (Success)
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int m;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(m));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
