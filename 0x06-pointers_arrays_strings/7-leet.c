#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: Pointer to Char
 * Return: char.
 */
char *leet(char *s)
{
	int a = 0;
	int b = 0;
	char *l = "aAeEoOlLtT";
	char *n = "4433001177";
	while (*(s + a) != '\0')
	{
		while (*(l + b) != '\0')
		{
			if (*(s + a) == *(l + b))
				*(s + a)  = *(n + b);
			b++;
		}
		b = 0;
		a++;
	}
	return (s);
}
