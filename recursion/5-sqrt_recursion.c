#include "main.h"
/**
 * root_checker - helper function to check for square root
 * @n: number to calculate the square root of
 * @x: iterator
 * Return: natural square root of n or -1
 * if n does not have a natural square root
 */

int root_checker(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (root_checker(n, x + 1));
}
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to calculate the square root of
* Return: natural square root of n or -1
* if n does not have a natural square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (root_checker(n, 1));
}
