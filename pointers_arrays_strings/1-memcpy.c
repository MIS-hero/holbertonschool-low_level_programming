#include "main.h"
/**
 * _memcpy - copies a number of bytes from a place to another
 * @n: number of bytes
 * @src: copy from
 * @dest: paste here
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest - n);
}
