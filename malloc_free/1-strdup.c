#include "main.h"
#include <stdlib.h>
/**
* _strdup - duplicates a string
* @str: string to duplicate
*
* Return: pointer to the duplicated string, or NULL if it fails
*/

char *_strdup(char *str)
{
	unsigned int i;

	unsigned int length = 0;

	char *newstring;

	char *s = str;

	if (str == NULL)
		return (NULL);

	while (*s != '\0')
	{
		length++;
		s++;
	}
	length++;
	newstring = malloc((length) * sizeof(char));
	if (newstring == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		newstring[i] = str[i];

	return (newstring);
	free(newstring);
}
