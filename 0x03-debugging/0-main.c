#include "main.h"
/**
 * positive_or_negative - starting point
 *
 * @i: the variable
 *
 */
void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero", i);
	}
	else if (i > 0)
	{
		printf("%d is positive", i);
	}
	else
	{
		printf("%d is negative", i);
	}
}
