#include "main.h"
/**
 * reverse_array - function that reverses the content  of an array of integers
 * @a: array
 * @n: number of elements of the  array
 */
void reverse_array(int *a, int n)
{
	int tmp, beg = 0;
	int end = n - 1; /* omit null terminator in length */

	while (beg < end)
	{
		tmp = *(a + beg);
		*(a + beg) = *(a + end);
		*(a + end) = tmp;
		beg++, end--;
	}
}
