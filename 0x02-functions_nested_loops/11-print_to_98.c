#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers to 98
 * @n: the variable
 */
void print_to_98(int n)
{
	n = 98;
	if (n == 98)
	{
		printf(n);
	}
	else if (n > 98)
	{
		printf(n--);
		printf(',');
		printf(' ');
	}
	else
		printf(n++);
	printf(',');
	printf(' ');
}
