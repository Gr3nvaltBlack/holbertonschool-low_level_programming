#include <stdio.h>

/**
 * main - Function that check the code
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int nbr;

	for (nbr = 1; nbr <= 100; nbr++)
	{
		if (nbr % 3 == 0 && nbr % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (nbr % 3 == 0)
		{
			printf("Fizz");
		}
		else if (nbr % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", nbr);
		}

		if (nbr < 100)
		{
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
