#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase.
 * @ch: Pointer to Char
 * Return: char.
 */

char *string_toupper(char *ch)
{
	int k = 0;

	while (*(ch + k) != '\0')
	{
		if (*(ch + k) >= 97 && *(ch + k) <= 122)
			*(ch + k) = *(ch + k) - ' ';
		k++;
	}
	return (ch);
}
