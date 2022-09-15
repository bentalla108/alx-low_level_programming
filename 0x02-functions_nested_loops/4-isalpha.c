#include "main.h"

/**
 * _isalpha - a function that prints if a charactere is letter
 * @c: caractere to test
 *
 * Return: 1 If c is a caractere.
 * Otherwise, O  is returned.
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
