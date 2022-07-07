#include "main.h"

/**
 * print_numbers - prints numbers
 * Return:0
 */

void print_numbers(void)
{
	char q = 0;

	while (q <= 9)
	{
		_putchar('0' + q);
		q++;

	}
	_putchar('\n');

}
