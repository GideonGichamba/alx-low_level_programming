#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program Entry Point
 *
 * Description: The program determines whether an int is -ve, 0 or +ve
 *
 * Return: 0 indicates success
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
