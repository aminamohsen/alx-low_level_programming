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
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is zeroe\n", n);
	}

	return (0);
	}
