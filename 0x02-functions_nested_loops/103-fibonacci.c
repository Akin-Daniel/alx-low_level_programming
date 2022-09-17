#include <stdio.h>
/**
 * main - starting point
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int n = 0;

	for (i = 1; i < 32; i++)
	{
		if (b % 2 == 0)
		{
			n += b;
			if (a % 2 == 0)
			{
				n += a;
			}
		}
		b += a;
		a = b - a;
	}
	printf("%lu \n", n);
	return (0);
}
