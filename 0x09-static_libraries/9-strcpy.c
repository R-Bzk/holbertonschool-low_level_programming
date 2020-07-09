#include "holberton.h"
/**
 *_strcpy - function that copies the string pointed.
 *@src: src
 *@dest: dest
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (src[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
