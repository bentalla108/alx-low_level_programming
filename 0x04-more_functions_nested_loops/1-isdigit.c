#include <ctype.h>
#include "main.h"

/**
 * _isdigit - a function that prints if a charactere is digit
 * @c: caractere to test
 *
 * Return: 1 If c is a digit
 * Otherwise, O  is returned.
 */

int _isdigit(int c)
{

		if(isdigit(c))
		return (1);
	else
		return (0);
}
