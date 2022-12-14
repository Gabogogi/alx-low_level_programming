#include <stdio.h>
/**
 * main - Entry point
 * print_alphabet -prints alphabet in lower case
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar (c);
	putchar('\n');
}
