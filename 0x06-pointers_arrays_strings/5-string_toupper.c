#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @*: string to be affected
 * Return: 0
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
