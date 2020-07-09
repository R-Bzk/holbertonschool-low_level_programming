#include "holberton.h"
/**
 * _strlen - check the lenght .
 *@s : integer .
 * Return: i.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
