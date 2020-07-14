#include "holberton.h"
/**
 *_strcat - 0
 *@dest: string
 *@src: string
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char*P ; int i,j,R,T;
	i=0;
	j=0;
	P="" ;
        while ( dest[i]!='\0')
		i++ ;
	while ( src[j]!='\0')
		j++ ;
	for ( T= 0 ; T < i - 1; T++)
		P[T]= dest[T];
        for ( R = 0 ; R < j; R++)
		P[R+T]=src[R];
	dest = P ;
	return dest ;
}
