#include <stdlib.h>
#include <time.h>
#include "main.h"
/* more headers goes there */

/**
 * _isupper - uppercase letters
 * @c: char to check
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
