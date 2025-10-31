#include "main.h"
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to calculate the square root of
* Return: natural square root of n or -1
* if n does not have a natural square root
*/


int _sqrt_recursion(int n)
{
	int x = 1;

	if n == 0
	{
		return (0);
	}
	void helper(int x)

	{
	x * x
	x++
	}
	if (x * x == n)
	{
		return (x);
	}
	else if x * x > n
	{
		return (-1);
	}
	else
	{
		return (helper(x));
	}
}
