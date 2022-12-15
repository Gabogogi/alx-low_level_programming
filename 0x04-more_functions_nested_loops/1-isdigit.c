#include "main.h"

/**
 * _isdigit - checks if it is a digit
 *
 * @c: digit to check
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 1 && c <= 9)
		return (1);
	else
		return (0);
}
