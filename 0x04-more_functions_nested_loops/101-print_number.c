#include "main.h"

/**
* print_number - print an integer
* @n: input value
* Return: none
*/
void print_number(int n)
{
unsigned int n1, n2;
int i;
int k = 1;
if (n < 0)
{
n = n * -1;
_putchar('-');
}
n1 = n;
n2 = n1;
if (n1 > 9)
{
while (n1 >= 10)
{
k = k * 10;
n1 = n1 / 10;
}
_putchar((n2 / k) + '0');
k = k / 10;
for (i = k; i >= 1; i = i / 10)
_putchar((n2 / i) % 10 + '0');
}
else
_putchar(n1 + '0');
}
