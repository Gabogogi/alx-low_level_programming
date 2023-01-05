#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the give number
 * Return: factorial
 */
int factorial(int n)
{
	int f;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		f = n * factorial(n - 1);
	}
			return (f);
}
