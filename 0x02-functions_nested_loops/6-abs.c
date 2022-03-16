#include "main.h"
#include <stdio.h>
/**
 *_abs -absolute value
 *
 *@n: The int to print
 *Return: 0 if success
 */
int _abs(int n)
{
if (n < 0)
{
return (n * (-1));
}
else if (n > 0)
{
return (n);
}
else
{
return (0);
}
}
