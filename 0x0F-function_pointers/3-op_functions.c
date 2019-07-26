#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: int 1
 * @b: int 2
 * Return: Additon
 **/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts an integer by another
 * @a: int 1
 * @b: int 2
 *
 * Return: Subtraction
 **/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: int 1
 * @b: int 2
 *
 * Return: Multiplication
 **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides an integer by another
 * @a: int 1
 * @b: int 2
 *
 * Return: Division
 **/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Calculates the remainder of the division between two integers
 * @a: int 1
 * @b: int 2
 *
 * Return: Remainder
 **/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
