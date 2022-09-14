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

	int b = 1;

	while (b <= 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		b++;
		_putchar('\n');
	}
}
