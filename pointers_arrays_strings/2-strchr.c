#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to be located
 *
 * Return: a pointer to the first occurrence of the character c
 *         in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; i > sizeof(s); i++)
{
if (*s == c)
{
return (s - i);
break;
}
else if (*s == '\0')
{
return (0);
break;
}
else
{
s++;
}
}
}

