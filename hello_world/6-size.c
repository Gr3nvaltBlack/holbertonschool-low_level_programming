#include <stdio.h>

/**
* main - is the entry point of a C program.
* It's where the program starts executing.
* When you run a C program, the operating system calls the main function first.
* Everything inside the main function is executed step by step.
* It's like the starting line of a race for your code
* Return: Always 0 (Success)
*/
int main(void)
{
printf("size of char in bytes: %lu\n" sizeof(char));
printf("size of int in bytes: %lu\n" sizeof(int));
printf("size of long int in bytes: %lu\n" sizeof(long int));
printf("size of float in bytes: %lu\n" sizeof(float));
return (0);
}
