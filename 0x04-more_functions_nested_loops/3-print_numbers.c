#include "holberton.h"
/**
 *print_numbers - function that prints the numbers
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
