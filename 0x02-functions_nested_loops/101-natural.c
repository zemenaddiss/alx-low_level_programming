#include <stdio.h>
/**
 *main - sum of the multiples of 3 0r 5 less than 1024
 *Return: 0 if success
 */
int main(void)
{
int num = 0;
int sum = 0;
while (num < 1024)
{
if (num % 3 == 0 || num % 5 == 0)
{
sum += num;
}
num += 1;
}
printf("%d\n", sum);
return (0);
}
