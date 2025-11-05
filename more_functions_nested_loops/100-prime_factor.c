#include <stdio.h>

/**
* main - finds and prints the largest prime factor of a number
*
* Return: Always 0 (Success)
*/
int main(void)
{
long n = 612852475143;

long factor = 2;

long largest = 0;

while (n > 1)
{
	if (n % factor == 0)
	{
		largest = factor;
		n /= factor;
	}
	else
	{
		factor++;
	}
}

	printf("%ld\n", largest);
	return (0);
}
