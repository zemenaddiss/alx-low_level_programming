#include <stdio.h>
/**
 *main - The first 98 Fibonacci numbers
 *Return: none
 */
int main(void)
{
int count;
unsigned long m, n, p, c;
unsigned long i, j, k;
i = 0;
j = 1;
count = 0;

for (count = 1; count <= 91; count++)
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
while (count <= 98)
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
if (count != 98)
printf(", ");
count++;
}
putchar('\n');
return (0);
}
