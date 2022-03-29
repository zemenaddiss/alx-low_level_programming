#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: mamory area to return
 * @b: constant byte
 * @n: size of bytes
 * Return: none
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{

		*(s + k) = b;
		k += 1;
	}
	return (s);
}
