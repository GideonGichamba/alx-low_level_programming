#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program entry point
 *
 * Description: program that randomly assigns a number everytime it is executed
 *
 * Return: 0 indicates success
*/
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* here is the code */

	last = n % 10;

	if (last >= 6)
		printf("last digit of %d is %d and is greater than 5\n", n , n % 10);
	else if ( last < 6 && last != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n , n % 10);
	else
		printf("last digit of last 0\n");
	return (0);
}
