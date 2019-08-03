#ifndef VARDIC_FUN
#define VARDIC_FUN
#include <stdarg.h>
#include <stdio.h>

/**
 * struct optype - struct for operation type
 *
 * @c: char types
 * @f: pointer to function
 *
 */
typedef struct optype
{
	char *c;
	void (*f)(va_list);
} optype_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list);
void print_integer(va_list);
void print_float(va_list);
void print_string(va_list);
#endif
