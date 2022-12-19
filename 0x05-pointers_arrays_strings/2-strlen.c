#include "main.h"
/**
* _strlen - returns length of a string
* @s: string to be counted
* Return: void
*/
int _strlen(char *s)
{
	int i; /* start the counter from 0*/

	for (; s++;)
		i++;
	return (i);
}
