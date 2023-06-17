# include <stdio.h>
# include <time.h>
# include <stdio.h>
/**
 * main - Entry point
 * Discription: 'Check for number if it is positive or negative'
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_Max / 2;
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



