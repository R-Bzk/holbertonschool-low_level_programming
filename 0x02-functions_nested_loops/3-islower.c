#include "holberton.h"
/**
 *_islower-is a function that checks for lowercase character.
 *@c: integer the number that will be checekd
 * Return: Always 0;
 */
int _islower(int c)
{
	if (c >= 97  && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
