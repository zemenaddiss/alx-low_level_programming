#include "main.h"
/**
 *print_last_digit - Last digit
 *@n: The int to print
 *Return:  0 i f success
 */
int print_last_digit(int n)
{
int i;
if (n < 0)
{
i = (-1 * (n % 10));
_putchar(i + '0');
return (i);
}
else
{
i = (n % 10);
_putchar(i + '0');
return (i);
}
}
