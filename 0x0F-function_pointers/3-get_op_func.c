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

	int c;

	for (c = 0 ; c <= 4 ; c++)
	{
		if (*ops[c].op == *s)
		{
			return (*(ops[c]).f);
		}

		c++;
	}

	return (NULL);
}
