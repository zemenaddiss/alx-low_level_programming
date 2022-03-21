#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: String to print
 * Return: nothing.
 */

void print_rev(char *s)
{
	int k = 0;
	while (*(s + k) != '\0')
	k += 1;
	k -= 1;
	while (k >= 0)
	{
		_putchar(*(s + k));
		k--;
	}
	_putchar('\n');
}
