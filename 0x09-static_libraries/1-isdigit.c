#include <stdlib.h>
#include <time.h>
#include "main.h"
/* more headers goes there */

/**
 * _isdigit - see if numbers are 0 - 9
 * @c: char c var to be checked
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
