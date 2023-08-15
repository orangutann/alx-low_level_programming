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
	char num = 0;
	int count = 0;

	while (count <= 15)
	{
		if (count < 10)
		{
			putchar(num + count);
		} else
		{
			putchar('a' + (count - 10));
		}
		++count;
	}
	putchar('\n');
	return (0);
}
