#include "main.h"
/**
 * _memset - function to fill the firts @n bytes
 * @n: bytes of memory to be pointed
 * @s: with the constant byte
 * @b: memory area pointer
 * Return: a pointer to the memrot area @s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
