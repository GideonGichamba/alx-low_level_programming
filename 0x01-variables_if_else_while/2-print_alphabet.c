#include <stdio.h>
/**
 * main - Program Entry point
 * 
 *desription: a programme that prints alphabet in lower case
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
