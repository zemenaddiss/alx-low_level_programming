#include "main.h"
/**
 * _strspn - Locates a character in a string
 * @s: This is the main C string to be scanned.
 * @accept: This is the string containing the list of characters to match in s
 * Return: return count
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cont = 0;
	int j = 0;
	int flag;

	while (*s != '\0')
	{
		flag = 0;
		while (*(accept + j) != '\0')
		{
			if (*s == *(accept + j))
				flag = 1;
			j += 1;
		}
		j = 0;
		if (flag == 0)
			break;
		cont += 1;
		s++;
	}
	return (cont);
}
