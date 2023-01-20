#include "variadic_functions.h"

/**
 * sum_them_all - finds sum of all numbers
 * @sum: addition of numbers
 * @mynumbers: numbers to be added
 * Return: sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list mynumbers;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0) return 0;
	va_start(mynumbers, n);
	for (i = 0; i < n; i++)
		sum += va_arg(mynumbers, int);
	va_end(mynumbers);
	return sum;
}
