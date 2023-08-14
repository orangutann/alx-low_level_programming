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
	char letter = 'a';
	char capLetter = 'A';
	while (letter <= 'z')
	{
		putchar(letter);
		++letter;
	}
	while (capLetter <= 'Z')
	{
		putchar(capLetter);
		++capLetter;
	}
	putchar('\n');
	return (0);
}
