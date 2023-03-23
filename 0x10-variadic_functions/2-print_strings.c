#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: separator
 * @n: count of variables
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *newStr;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		newStr = va_arg(arg, char *);
		if (newStr != NULL)
			printf("%s", newStr);
		else
			printf("%s", "(nil)");

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
