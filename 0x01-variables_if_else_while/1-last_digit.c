#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lstDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lstDigit = n % 10;
	if (lstDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstDigit);
	} else if (lstDigit == 0)
	{
		printf("Last digit of %d is %d and is %d\n", n, lstDigit, lstDigit);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstDigit);
	}
	return (0);
}
