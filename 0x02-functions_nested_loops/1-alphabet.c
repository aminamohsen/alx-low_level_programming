#include <stdio.h>
/**
 * print_alphabet - prints the english alphabet from a-z.
 * Return: Nothing.
 */
void print_alphabet(void)
{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
		putchar(c);
		}
		putchar('\n');
}
