#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - Print all natural numbers from n to 98
 *@n: The number start from n
 *Return: 0 if success
 */
void print_to_98(int n)
{
if (n < 98)
{
for (; n < 98; n++)
{
printf("%d, ", n);
}
}
else if (n > 98)
{
for (; n > 98; n--)
{
printf("%d, ", n);
}
}
if (n == 98)
{
printf("%d\n", n);
}
}
