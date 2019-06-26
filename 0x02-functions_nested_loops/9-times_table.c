#include "holberton.h"

/**
 * times_table - Function that prints the 9 times table, starting with 0
 *
 * Return: Always void
 */
void times_table(void)
{
	int vt;
	int ot;
	int mr;

	for (vt = 0 ; vt <= 9 ; vt++)
	{

		for (ot = 1 ; ot <= 9 ; ot++)
		{

			mr = vt * ot;

		if (mr <= 9)
		{
			_putchar(mr);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}

	for (ot = 0 ; ot <= 9 ; ot++)

		if (ot < 9)
		{
			_putchar(mr);
		}
}
