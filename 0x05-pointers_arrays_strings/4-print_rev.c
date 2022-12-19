#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 * Return: 0
 */
void print_rev(char *s)
{
	int i, j;

	j = 0;

	while(s[j] != '\0')
        	j++;
        for(i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
