#include <stdio.h>
/**
 * add - adds two numbers together.
 * @i: The first number to be added.
 * @j: The second number to be added.
 * Return: the sum of two numbers.
 */
int add(int i, int j)
{
	return (i + j);
}
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int result = add(5, 7);

	printf("The result is: %d\n", result);
	return (0);
}
