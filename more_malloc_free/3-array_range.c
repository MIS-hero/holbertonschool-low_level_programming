#include "main.h"
#include <stdlib.h>
/**
* array_range - Creates an array of integers within a specified range
* @min: Minimum value (inclusive)
* @max: Maximum value (inclusive)
*
* Return: Pointer to the newly created array or NULL on failure
*/
int *array_range(int min, int max)
{
	int *array;

	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min + i;
	return (array);
}
