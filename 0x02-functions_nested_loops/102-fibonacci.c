#include <stdio.h>
/**
 *main - First Fibonacci numbers
 *
 *Return: 0 if success
 */
int main(void)
{
long i = 0;
long j = 1;
int n = 0;
long k;
while (n < 50)
{
k = j + i;
if (n != 49)
printf("%ld, ", k);
else
printf("%ld\n", k);
i = j;
j = k;
n += 1;
}
return (0);
}
