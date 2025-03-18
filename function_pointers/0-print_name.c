#include "function_pointers.h"

/**
 * print_name - function pointer that prints a name
 * @name: name to print
 * @f: printing function
 * @*: parameter of *f().
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
