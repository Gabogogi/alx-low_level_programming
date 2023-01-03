#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @n: number of bytes to be copied
 * @dest: destination string
 * @src: source string
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *src_char = (char *)src;
	char *dest_char = (char *)dest;

	for (i = 0; i < n; i++)
		dest_char[i] = src_char[i];
	return (0);
}
