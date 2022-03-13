#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0 if success
 */
int main(void)
{
int i, j, k, a;
for (a = 48; a <= 57; a++)
{
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
for (k = 48; k <= 57; k++)
{
if (((k + j) > (a + i) && j >= a) || a < j)
{
putchar(a);
putchar(i);
putchar(' ');
putchar(j);
putchar(k);
else if (a + i + j + k == 227 && a == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
