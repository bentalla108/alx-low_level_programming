#include "main.h"

/**
 * _islower - a function that prints if a letter is in lowercase
 * @c: letter to test
 *
 * Return: 1 If c is lowercase.
 * Otherwise, O  is returned.
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
