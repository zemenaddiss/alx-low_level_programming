#include <stdio.h>
/**
 *main - The first 98 Fibonacci numbers
 *Return: none
 */
int main(void)
{
int ct;
unsigned long i, j, k, m, n, p, c;
i = 0;
j = 1;
for (ct = 1; ct <= 91; ct++)
{
k = i + j;
i = j;
j = k;
printf("%lu, ", k);
}
m = i % 1000;
i = i / 1000;
n = j % 1000;
j = j / 1000;
while (ct <= 98)
{
c = (m + n) / 1000;
p = (m + n) - (c * 1000);
k = (i + j) + c;
m = n;
n = p;
i = j;
j = k;
if (p >= 100)
printf("%lu%lu", k, p);
else
printf("%lu0%lu", k, p);
if (ct != 98)
printf(", ");
ct++;
}
putchar('\n');
return (0);
}
