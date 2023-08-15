#include <stdio.h>
#include <unistd.h>
/**
 * main - Start
 *
 * Description: 'Program to print a string to the console'
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char line[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, line, sizeof(line) - 1);
	return (1);
}
