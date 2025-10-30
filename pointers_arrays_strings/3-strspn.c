#include "main.h"
/**
* _strspn - gets the length of a prefix substring
* @s: the string to be searched
* @accept: the prefix substring
*
* Return: the number of bytes in the initial segment of s
*         which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	char *a;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				i++;
				break;
			}
			a++;
		}
		s++;
	}
	return (i);
}
