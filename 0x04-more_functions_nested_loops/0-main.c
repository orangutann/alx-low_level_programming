#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _isupper(int c)
{
	return c >= 'A' && c <= 'Z';
}
