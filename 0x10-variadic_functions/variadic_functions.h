#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct myPrintf - struct defining a print function
 * @ch:  charcter to a data type
 * @f: function pointing to printing a data type
 */

typedef struct myPrintf
{
	char * ch;
	void (*f)(va_list args);
} printAll;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif
