#include <stdio.h>

/**
* main - the largest prime number
* 612852475143
* Return: 0
*/
int main(void)
{
long num = 612852475143;
long dv = 2;
long lp = 0;
while (num != 1)
{
if (num % dv == 0)
{
num = num / dv;
lp = dv;
}
dv += 1;
}
printf("%ld\n", lp);
return (0);
}
