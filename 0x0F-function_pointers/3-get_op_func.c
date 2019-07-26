#include "3-calc.h"

/**
 * get_op_func - Searchs for match the pronted operator
 * @s: Pointer for compare the operator
 *
 * Return: Pointer to the function that corresponds with the operator
 **/
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

	int c = 0;

	while (c <= 4)
	{
		if (*ops[c].op == *s)
			return (*(ops[c]).f);
		c++;
	}

	return (NULL);
}
