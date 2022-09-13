#include "main.h"

int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}

	putchar('\n');

	return (0);

}
