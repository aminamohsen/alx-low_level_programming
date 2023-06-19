#include <stdlib.h>
#include <time.h>
# include <stdio.h>
/**
 *main - Prints a random number and states whether
 *it is positive, negative, or zero
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_Max / 2;
<<<<<<< HEAD

	/* your code goes there */
	if(n < 0)
=======
	if (n > 0)
>>>>>>> 89a964adeeb804351a4d0a417386f2d7af13e6fb
	{
		printif("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
