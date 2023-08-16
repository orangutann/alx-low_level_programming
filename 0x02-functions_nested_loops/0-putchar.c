#include <stdlib.h>
#include <time.h>
#include "main.h"
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	char str[] = "_putchar\n";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}
