#include "main.h"

/**
*swap_int - Take 2 pointer and swap them
*a update the value it to to 98
*@a : Parameter 1  to update change to b
*@b : Parameter 2  to update change to a
*
*
*/

void swap_int(int *a, int *b)

{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
