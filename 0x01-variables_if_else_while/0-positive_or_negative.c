#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */
/** 
 * main-entry point
 *
 * Return: Alawys 0 (sucess)
 */
{
	init n;

	srand(time(0));
	n = rand() - RAND_Max / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf(("%d is zero\n", n);
	}
	else
	{
	printf(("%d is negative\n", n);
			return (0);
}
