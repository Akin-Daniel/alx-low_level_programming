#include "main.h"
/**
 * _isalpha - checks if the input is an alphabet
 *
 * @c: the input
 *
 * Return: always 1 or 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
