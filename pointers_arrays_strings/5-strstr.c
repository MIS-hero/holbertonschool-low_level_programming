#include "main.h"
/**
* _strstr - locates a substring
* @haystack: string to search in
* @needle: substring to search for
* Return: pointer to the beginning of the located substring,
* or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	char *n;

	char *h = haystack;

	while (*h)
	{
		n = needle;
		while (*n != '\0')
		{
			if (*h == *n)
			{
				h++;
				n++;
			}
			else
			{
				h++;
				haystack = h;
				break;
			}
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
