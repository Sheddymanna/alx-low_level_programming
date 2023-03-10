#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: input string
 * @src: input string
 * @n: an input integer
 * Return: A pointer to the resulting string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != 0; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
