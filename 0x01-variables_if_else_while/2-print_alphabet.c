#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 if success
 */
int main(void)
{
char a = 'a';
int n = 0;

while (n < 26)
{
putchar(a);
a++;
n++;
}
putchar('\n');
return (0);
}
