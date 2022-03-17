#include "main.h"

/**
* print_triangle - print triangle
* @s: size of triangle
* Return: none
*/
void print_triangle(int s)
{
int i, j, k;
if (s > 0)
{
for (i = 0; i < s; i++)
{
for (j = 0; j < s; j++)
{
k = (s - i) - 1;
if (j < k)
_putchar(' ');
else
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n');
}
