#include "holberton.h"
/**
 *_isdigit - function that checks for a digit
 *@c: int
 *Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
