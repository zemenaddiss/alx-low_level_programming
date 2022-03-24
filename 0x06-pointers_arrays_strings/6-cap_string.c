#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: Pointer to Char
 * Return: char.
 */

char *cap_string(char *s)
{
int k = 0;
while (*(s + k) != '\0')
{
if (k == 0 && (*(s + k) >= 97 && *(s + k) <= 122))
{
*(s + k) = *(s + k) - ' ';
 k++;
 }
 if (*(s + k) == ' ' || *(s + k) == '\n' || *(s + k) == '\t'
 || *(s + k) == ',' || *(s + k) == ';' || *(s + k) == '!'
 || *(s + k) == '?' || *(s + k) == '"' || *(s + k) == '('
 || *(s + k) == ')' || *(s + k) == '{' || *(s + k) == '}'
 || *(s + k) == '.')
 {
 k++;
 if (*(s + k) >= 97 && *(s + k) <= 122)
 {
 *(s + k) = *(s + k) - ' ';
 }
 }
 else
 k++;
 }
 return (s);
