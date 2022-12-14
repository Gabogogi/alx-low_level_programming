#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @n: number of bytes to be copied
 * @dest: bytes to memory area
 * @src: bytes from memery area
 * Return: Returns a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
