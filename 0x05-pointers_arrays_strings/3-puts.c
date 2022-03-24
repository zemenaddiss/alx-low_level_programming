#include "holberton.h"

/**
 * _puts - function that prints a string
 *
 * @str: pointer to char
 * Return: nothing
 */

void _puts(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k += 1;
	}
	_putchar('\n');
}
