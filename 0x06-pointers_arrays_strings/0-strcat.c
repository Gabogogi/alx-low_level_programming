#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	char temp[30]; 
	int i = 0, j = 0;

	while (dest[i] != '\0'){
		temp[j] = dest[i];
		i++;
		j++;
	}
	while (src[i] != '\0'){
		temp[j] = src[i];
		i++;
		j++;
	}
	temp[j] = '\0';
	return (0);
}
