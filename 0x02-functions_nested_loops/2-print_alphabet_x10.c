#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a;

	a = 'a';

	char beta;

	beta = 'b';

	while (beta <= 'k')
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		beta++;
		_putchar('\n');
	}
}
