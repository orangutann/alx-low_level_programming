#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = '0';
	int count = 0;

	while (count <= 9)
	{
		putchar(num + count);
		++count;
	}
	putchar('\n');
	return (0);
}
