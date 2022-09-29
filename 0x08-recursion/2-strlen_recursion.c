#include "main.h"

/**
 * _strlen_recursion - return a value of a string
 * @s: string to count
 *
 * Return: The number of charactere if true
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
