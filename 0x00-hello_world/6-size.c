#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: 'the program'd description
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	int a;

	double b;

	char c;
	long int d;

	long long int e;

	float f;


	printf("The size of an int is: %lu.\n", (unsigned long) sizeof (a));

	printf("The size of a double is: %lu.\n", (unsigned long) sizeof (b));

	printf("The size of a char is: %lu.\n", (unsigned long) sizeof (c));

	printf("The size of a long_int is: %lu.\n", (unsigned long) sizeof (d));

	printf("The size of a long_long_int is: %lu.\n", (unsigned long) sizeof (e));

	printf("The size of a float is: %lu.\n", (unsigned long) sizeof (f));
	return (0);

}

