#include "main.h"
/**
 *print_last_digit - Last digit
 *@n: The int to print
 *Return:  0 i f success
 */
int Print_last_digit(int n)
{
if (n < 0)
{
n = n * (-1);
}
n %= 10;
_putchar(n + '0');
return (n);
}
