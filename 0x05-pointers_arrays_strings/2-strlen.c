#include "holberton.h"

/**
 * _strlen - Swaps the values of two integers
 * @s : Is the string value
 * Return : s is the value for return
 */
int _strlen(char *s)
{
	int i;
	int len;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		len++;
	}
	return (len);
}
