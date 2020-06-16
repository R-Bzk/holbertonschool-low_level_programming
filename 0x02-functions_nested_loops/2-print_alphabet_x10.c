#include "holberton.h"
/**
* print_alphabet_x10- putchar
*/
void print_alphabet_x10(void)
{
char x;
char n;
for (n = '0' ; n <= '9' ; n++)
{
for (x = 'a'; x <= 'z' ; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
