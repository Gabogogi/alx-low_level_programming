#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int i, j, count = 0;
	char rev;

	while (s[count] != '\0')
	{
		count++;
	}
	j = count - 1;
	
	for (i = 0; j >= 0 && i < j; j--, i++)
	{
		rev = s[i];
		s[i] = s[j];
		s[j] = rev;
	}
}
