#include "main.h"
/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char a = 'a';
	for(a = 'a', a <= 'z', a++)
		putchar(a);
	putchar('\n');
}
