#include <stdlib.h>
#include <time.h>
#include "main.h"
/* more headers goes there */

/**
 * print_numbers - print numbers from 0-9
 * return: void
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= 9; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
