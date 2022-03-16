#include "main.h"
/**
 *print sign - print the sign of the input number
 *@n: The int to print
 *Return: Always 0 if success
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
}
else if (n == 0)
return (1);
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
