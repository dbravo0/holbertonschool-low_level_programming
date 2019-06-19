#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long char lc;
long int li;
float f;
printf("Size of char: %ld bytes\n", sizeof(c));
printf("Size of an int: %ld bytes\n", sizeof(i));
printf("Size of a long char: %ld bytes\n", sizeof(lc));
printf("Size of a long int: %ld bytes\n", sizeof(li));
printf("Size of float: %ld bytes\n", sizeof(f));
return (0);
}
