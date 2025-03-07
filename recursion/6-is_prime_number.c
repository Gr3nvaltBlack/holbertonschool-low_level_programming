#include "main.h"

/**
 * is_divisible - Checks if `n` is divisible by `i`.
 * @n: The number Ã check
 * @i: The possible divisor.
 *
 * Return: 0 if `n` is divisible by `i`, 1 otherwise
 */
int is_divisible(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_divisible(n, i + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number | check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_divisible(n, 2));
}
