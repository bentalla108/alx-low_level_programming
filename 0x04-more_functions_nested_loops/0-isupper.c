#include "main.h"

/**
 * _isupper - a function that prints if a letter is in uppercase
 * @c: letter to test
 *
 * Return: 1 If c is lowercase.
 * Otherwise, O  is returned.
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
