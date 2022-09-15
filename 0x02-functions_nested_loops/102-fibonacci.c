#include <stdio.h>
/**
 * main - starting point
 *
 * return: 0
 */
int main(void)
{
	int n = 1;
	long a = 1;
	long b = 2;

	while (n <= 25)
	{
		printf("%li %li", a, b);
		a += b;
		b += a;
		n++;
	}
	return (0);
}
