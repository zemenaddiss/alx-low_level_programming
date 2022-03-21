#include "main.h"
#include <stdio.h>

/**
 * print_array - n elements of an array of integers
 *
 * @a: first int
 * @n: second int
 * Return: none
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
