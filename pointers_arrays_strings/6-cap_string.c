#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to the string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0;
	int capitalize_next = 1;
	char separators[] = " \t\n,;.!?\"(){}";
	int j;

	while (s[i] != '\0')
	{
		if (capitalize_next && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] - ('a' - 'A');

		capitalize_next = 0;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (s[i] == separators[j])
			{
				capitalize_next = 1;
				break;
			}
		}
		i++;
	}

	return (s);
}
