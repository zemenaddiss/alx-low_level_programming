#include "main.h"

/**
* print_most_numbers - print numbers
*
* Return: none
*/
void print_most_numbers(void)
{
int n = 0;
while (n <= 9)
{
if (n != 2 && n !=4)
_putchar(n + '0');
n += 1;
}
_putchar('\n');
}
