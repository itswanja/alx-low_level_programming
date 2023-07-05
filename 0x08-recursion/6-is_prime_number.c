#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - returns prime number
 * @n: input integer
 * Return: 1 if integer is prime number otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculates if a number is prime
 * @n: number to be calculated
 * @i: iterator
 * Return: i if n is prime otherwise 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
