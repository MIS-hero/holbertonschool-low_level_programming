#include "main.h"
/**
* _atoi - converts a string to an integer
* @s: the string to convert
* Return: the converted integer
*/
int _atoi(char *s)
{
	int sign = 1;

	unsigned int result = 0;

	int i = 0;

	int started = 0;

	/* Skip whitespace characters */
	while (s[i] == ' ' || s[i] == '\t' || s
[i] == '\n' || s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
		i++;
	/* Check for optional sign */
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
	/* Convert digits to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		started = 1;
		result = result * 10 + (s[i] - '0');
		i++;
	}
	/* If no digits were found, return 0 */
	if (!started)
	return (0);
return (sign * (int)result);
}
