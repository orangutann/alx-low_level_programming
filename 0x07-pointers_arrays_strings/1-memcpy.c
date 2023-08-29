#include "main.h"
/**
 *_memcpy - copy memory area
 *@dest: stored memory
 *@src: copied memory
 *@n: number of bytes
 *
 *Return: copied memory with int n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
