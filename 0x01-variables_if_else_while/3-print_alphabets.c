#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	{
	putchar(var);
	}
	for (var = 'A'; var <= 'Z'; var++)
	{
	putchar(var);
	}
	putchar('\n');
	return (0);
}
