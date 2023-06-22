#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
     	int r;
	r = _islower('H');      // Check if 'H' is lowercase
	_putchar(r + '0');      // Print the result (0 or 1)
	r = _islower('o');      // Check if 'o' is lowercase
	_putchar(r + '0');      // Print the result (0 or 1)
	r = _islower(108);      // Check if the ASCII value 108 is lowercase ('l')
	_putchar(r + '0');      // Print the result (0 or 1)
	_putchar('\n');         // Print a new line
	return (0);
}
