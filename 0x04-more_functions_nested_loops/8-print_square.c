#include "main.h"

/**
* print_square - prints a square
*
* @s: size of square
* Return: none
*/
void print_square(int s)
{
int i, j;
if (s > 0)
{
for (i = 0; i < s; i++)
{
for (j = 0; j < s; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n');
}
