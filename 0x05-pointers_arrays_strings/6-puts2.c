#include "main.h"

/**
 * puts2 - every other character
 *
 * @str: pointer to char
 * Return: none
 */

void puts2(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		if (k % 2 == 0)
		{
			_putchar(*(str + k));
		}
		k += 1;
	}
	_putchar('\n');
}
