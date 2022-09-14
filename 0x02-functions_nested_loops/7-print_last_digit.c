#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints the last digit
 *
 * @x: the input variable
 *
 * Return: last digit
 */
int print_last_digit(int x)
{
	_putchar('0' + _abs(x % 10));
	return (_abs(x % 10));
}
