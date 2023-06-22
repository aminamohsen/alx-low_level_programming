#include <stdio.h>

int _islower(int c);

int main(void)
{
	char ch1 = 'A';
	char ch2 = 'b';
	if (_islower(ch1))
	printf("%c is lowercase\n", ch1);
	else
	printf("%c is not lowercase\n", ch1);
	if (_islower(ch2))
	printf("%c is lowercase\n", ch2);
	else
	printf("%c is not lowercase\n", ch2);
	return 0;
}

