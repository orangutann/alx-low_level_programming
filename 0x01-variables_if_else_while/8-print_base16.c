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
	int count = 0;

	while (count <= 15)
	{
		if (count < 10)
		{
			putchar('0' + count);
		} else
		{
			putchar('a' + (count - 10));
		}
		++count;
	}
	putchar('\n');
	return (0);
}
