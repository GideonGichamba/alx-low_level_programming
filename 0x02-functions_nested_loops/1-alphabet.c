#include "main.h"
/**
 * main - program enrty point
 *
 * Description: A program that prints alphabet
 *
 * Return: success 0
*/
char print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
