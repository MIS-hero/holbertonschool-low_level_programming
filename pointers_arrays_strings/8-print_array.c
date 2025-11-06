#include "main.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array of integers
* @a: pointer to the first element of the array
* @n: number of elements to print
* Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%i, ", a[i]);
		else
			printf("%i", a[i]);
	}
	printf("\n");
}
