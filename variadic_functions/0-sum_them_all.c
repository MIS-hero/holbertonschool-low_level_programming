#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* sum_them_all - returns the sum of all its parameters
* @n: number of parameters
* Return: the sum of the parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	va_list ap;

	va_start(ap, n);

	int i;

	int sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	return (sum);
	va_end(ap);
}
