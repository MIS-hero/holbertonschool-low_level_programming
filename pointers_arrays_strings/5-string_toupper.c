#include "main.h"
/**
* string_toupper - Converts all lowercase letters of a string to uppercase.
* @s: Pointer to the string to be converted.
* Return: Pointer to the modified string.
*/
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (s);
}
