#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: String to reverse
 * Return: nothing.
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char ch;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (j < i)
	{
		ch = s[i];
		s[i] = s[j];
		s[j] = ch;
		j++;
		i--;
	}
}
