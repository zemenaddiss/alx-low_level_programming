#include <stdio.h>
/**
 *main - Sum even Fibonacci less than 4000,000
 *
 *Return: none
 */
int main(void)
{
unsigned long count, k;
unsigned long i = 0;
unsigned long sum = 0;
unsigned long j = 1;
for (count = 0; count < 50; count++)
{
k = i + j;
i = j;
j = k;
if (k % 2 == 0 && k < 4000000)
{
sum += k;
}

}
printf("%lu\n", sum);
return (0);
}
