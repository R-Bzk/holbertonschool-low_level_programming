#include <stdio.h>
/**
 *main - 0
 *@argc: number  strings
 *@argv: number  arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
