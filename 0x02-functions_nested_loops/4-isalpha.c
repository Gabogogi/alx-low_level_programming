#include "main.h"
/**
 *_isalpha - checks for char alphabet
 *
 *@c: the char to be checked 
 *
 * Return: 1 if char is letter or upper, 0 otehrwise
 */
int_isalpha(int c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else  
		return (0)
}
