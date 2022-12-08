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

	int i;

	double d;

	char c;
	int long_int;

	int long_long_int;

	float f;


	printf("The size of an int is: %lu.\n", (unsigned long) sizeof (i));

	printf("The size of a double is: %lu.\n", (unsigned long) sizeof (d));

	printf("The size of a char is: %lu.\n", (unsigned long) sizeof (c));

	printf("The size of a long_int is: %lu.\n", (unsigned long) sizeof (long_int));

	printf("The size of a long_long_int is: %lu.\n", (unsigned long) sizeof (long_long_int));

	printf("The size of a float is: %lu.\n", (unsigned long) sizeof (float));
	return (0);

}


