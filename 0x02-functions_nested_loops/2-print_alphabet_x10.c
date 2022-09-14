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

	int beta;

	for (beta = 1; beta <= 10; beta++)
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
