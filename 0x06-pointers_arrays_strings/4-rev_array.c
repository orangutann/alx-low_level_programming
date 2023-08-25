#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int integer;
	int key;

	for (integer = 0; integer < n--; integer++)
	{
		key = a[integer];
		a[integer] = a[n];
		a[n] = key;
	}
}
