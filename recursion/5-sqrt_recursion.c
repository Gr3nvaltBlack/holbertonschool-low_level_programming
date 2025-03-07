#include "main.h"

/**
 * find_sqrt - Calculate the square root e of `n` by trying progressively.
 * @n: The number whose square root we are looking for.
 * @guess: The current test for the square root
 *
 * Return: The square root of `n` if it is natural, otherwise -1.
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of `n`.
 * @n: The number whose square root we are looking for.
 *
 * Return: The natural square root of `n` or -1 if it doesn't have one.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 0));
}
