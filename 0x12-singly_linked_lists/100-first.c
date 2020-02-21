#include <stdio.h>

/**
 * mymain - Function that prints a text before the main funtion is executed
 **/
void __attribute__ ((constructor)) mymain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
