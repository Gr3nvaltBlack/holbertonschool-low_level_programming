#include <stdio.h>
#include "main.h"

/**
 * main - Displays all arguments received by the program
 * @argc: Number of arguments
 * @argv: Array containing arguments
 *
 * Return: Always 0 (Succes)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
