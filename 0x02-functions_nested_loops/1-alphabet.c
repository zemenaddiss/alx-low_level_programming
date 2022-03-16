#include "main.h"
/**
 *print_alphabet - print alphabet lowercase
 *
 *Return: Always 0 if success
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
