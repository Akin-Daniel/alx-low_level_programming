#include <stdio.h>
/**
 * main - starting point
 *
 * Return: always 0
 */
int main(void)
{
	char z = 'z';

	for (; z >= 'a'; z--)
		putchar("%d", z);
	putchar("\n");
	return (0);
}
