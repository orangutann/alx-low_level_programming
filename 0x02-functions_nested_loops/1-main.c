#include "main.h"
#include <unistd.h>
#include "main.c"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
        char str = 'a';
        while (str <= 'z')
        {
                _putchar(str);
                ++str;
        }
}
