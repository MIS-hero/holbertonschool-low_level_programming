#include "main.h"
/**
* _strpbrk - searches a string for any of a set of bytes
* @s: the string to be searched
* @accept: the string containing the bytes to match
*
* Return: a pointer to the byte in s that matches one of the bytes in accept,
*         or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				i++;
			}
			else
			{
				a++;
			}
		}
		if (i > 0)
		{
			if *s != *a
			{
				return (s + i);
			}
		}
		s++;
	}
	return (0);
}

