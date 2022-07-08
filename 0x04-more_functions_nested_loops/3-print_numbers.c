#include "main.h"

/**
 * print_numbers - print the numbers since 0 to 9
 *
 */
void print_numbers(void)
{
	char x;

	for (x = 48; x < 58; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
