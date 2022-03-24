#include "main.h"
/**
 * _puts - prints a string
 *
 * @str: pointer to char
 * Return: none
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
