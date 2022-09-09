#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* 
	main fonction is used to run the script
	and return 0 for sucessful 

*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n == 0)
	printf("%d is zero\n", n);
	else
	printf("%d is negative\n", n);
	return (0);
}
