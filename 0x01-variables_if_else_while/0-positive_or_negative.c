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

	srand(time(Null));
	int n = (int)rand() - RAND_Max / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zeroe\n", n);
	}

	return (0);
	}
