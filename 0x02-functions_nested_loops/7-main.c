#include "holberton.h"
/**
 *print_last_digit- check the code for Holberton School students.
 *@n: integer
 * Return: Always 0.
 */
int main(void)
{
	int n;

	print_last_digit(98);
	print_last_digit(0);
	n = print_last_digit(-1024);
	_putchar('0' + n);
	_putchar('\n');
	return (0);
}
