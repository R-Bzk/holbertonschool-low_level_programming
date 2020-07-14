#include "holberton.h"
/**
 *_strcat - 0
 *@dest: string
 *@src: string
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (n = 0; src[n] != '\0'; n++)
		dest[n + i] = src[n];
	return (dest);
}
