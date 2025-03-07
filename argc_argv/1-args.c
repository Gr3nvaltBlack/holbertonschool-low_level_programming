#include <stdio.h>
#include "main.h"

/**
 * main - Displays the number of arguments passed to the program
 * @argc: Number of arguments
 * @argv: Argument array (unused here)
 *
 * Return: Always  0 (Succe¨s)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
