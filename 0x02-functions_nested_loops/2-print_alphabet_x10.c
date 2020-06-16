#include "holberton.h"
/**
 * main -putchar
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char x;
	char n;
	for (n ='0'; n <= '9' ; n++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
_putchar(x);
		}
_putchar('\n');
	}
	return ;
}
