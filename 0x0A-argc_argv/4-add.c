#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int c, d;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (c = 1; c < argc; c++)
	{
		for (d = 0; argv[c][d] != '\0'; d++)
		{
			if (argv[c][d] < '0' || argv[c][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[c]);
	}
	printf("%d\n", sum);
	return (0);
}
