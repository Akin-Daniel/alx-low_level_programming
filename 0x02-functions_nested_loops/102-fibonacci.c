#include <stdio.h>
/**
 * main - fibonacci series to 50
 *
 * Return: (success)
 */
int main(void)
{
	int n = 1;
	long a = 1;
	long b = 2;

	printf("%li, %li", a, b);

	while (n  <= 24)
	{
		a += b;
		b += a;
		printf(", %li, %li", a, b);
		n++;
	}
	return (0);
}
