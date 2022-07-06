#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
*/
int print_last_digit(int nld)
{
	int nld;

	nld = (nld % 10);

	if (nld < 0)
		nld = (-1 * nld);
	_putchar(nld + '0');
	return (nld);
}
