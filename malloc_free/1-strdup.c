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

	if (str == NULL)
		return (NULL);

	while (*str != '\0')
	{
		length++;
		str++;
	}
	newstring = malloc((length + 1) * sizeof(char));
	if (newstring == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		newstring[i] = str[i];
	newstring[length + 1] = '\0';

	return (newstring);
	free(newstring);
}
