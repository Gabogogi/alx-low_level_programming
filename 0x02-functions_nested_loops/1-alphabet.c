#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (success)
 */
void print_alphabet(void);
int main(){
	char c;
	for(c = 'a'; c <= 'z'; c++){
		putchar(c);
	}
	putchar('\n');
return (0);
}
