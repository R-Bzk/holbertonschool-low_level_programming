#include "holberton.h"
/**
 *main - putchar
 *
 * return 0 ( succes )
 */
void print_alphabet (void)
{
	char x ;
	for ( x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	return ;
}
