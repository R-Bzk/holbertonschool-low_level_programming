B#include "holberton.h"
#include <stdio.h>
/**
 *print_chessboard - 0
 *@a: double table
 * i: int
 * y: int
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int y = 0;
while (i < 8)
{
		y = 0;
		while (y < 8)
{
		       _putchar(a[i][y]);
			y++;
}
		i++;
		_putchar('\n');
}
}
