#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - this is the main function
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	n = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and greater than 5", n, n);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0", n, n);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, n);

	printf("\n");

	return (0);
}
