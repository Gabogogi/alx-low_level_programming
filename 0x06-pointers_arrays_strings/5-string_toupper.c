#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @*: string to be affected
 * Return: 0
 */
char *string_toupper(char *)
{
	int i;
	for (i = 0; *(i) != '\0'; i++)
	{
		if (*[i] >= 97 && *[i] <= 122)
		{
			*[i] = *[i] - 32;
		}
	}
}
