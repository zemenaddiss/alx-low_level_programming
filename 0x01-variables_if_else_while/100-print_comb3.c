#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0 if success
 */
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j = i + 1; j <= 9; j++)
{
putchar(i + '0');
putchar(j + '0');
if (((i * 10) + j) < 89)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
