#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums of all its parameters.
 * @n: number of parameters
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	unsigned int sum = 0;

	va_start(list, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, unsigned int);
	}
	return (sum);
}
