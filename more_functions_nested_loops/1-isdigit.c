#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * int _isdigit(int c) - checks for a digit
 *
 * @c: int
 *
 * Return: (0) or (1)
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
