#include "main.h"
/**
* reset_to_98 - resets pointer to 98
* @n: variable to be reset
* Return: void
*/
void reset_to_98(int *n)
{

	int *p;
	p = &n;
	*p = 98;
}
