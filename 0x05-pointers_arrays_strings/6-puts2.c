#include "main.h"
/**
* puts2 - prints every other character
* @str: - string to be printed
* Return: character
*/
void puts2(char *str)
{
        int a = 0;

        while (str[a] != '\0')
        {
                _putchar(str[a]);
                a++;
		_putchar('\n');
        }
}
