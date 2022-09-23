#include "main.h"
/**
 * *_strncat - function that concatenates two strings
 * @dest: the string to be appended to
 * @src: the string appended
 * @n: number of bytes used
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

