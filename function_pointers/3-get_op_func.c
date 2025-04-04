#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user.
 * @s: operator passed as argument.
 * Return: pointer to the function that correspond to
 * the operator given as parameter or if error : 98 or 99.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
