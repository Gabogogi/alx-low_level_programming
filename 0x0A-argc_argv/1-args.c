#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: No of arguments passed
 * @argv:  array of character pointers
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
