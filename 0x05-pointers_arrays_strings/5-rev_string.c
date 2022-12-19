#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int i, j, count = 0;
	char rev[1000];
	
	while (s[count] != '\0')
	{
		count++;
	}
	j = count -1;
	
	for (i = 0; i < count; i++)
	{
		rev[i] = s[j];
		j--;
	}
}
