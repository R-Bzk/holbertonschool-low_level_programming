#include "holberton.h"
/**
 *print_rev - function that reverses a string.
 *@s: char
 *
 */
void print_rev(char *s)
{
	char *f;

	f = s;
	while (*s != '\0')
	{
		s++;
	}

	while (s != f)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
