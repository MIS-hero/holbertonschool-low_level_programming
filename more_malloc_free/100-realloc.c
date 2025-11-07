#include "main.h"
#include <stdlib.h>
/**
* _realloc - Reallocates a memory block
* @ptr: Pointer to the previously allocated memory
* @old_size: Size of the previously allocated memory
* @new_size: Size of the new memory block
*
* Return: Pointer to the reallocated memory or NULL on failure
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	{
		void *new_ptr = malloc(new_size);

		unsigned int min_size = old_size < new_size ? old_size : new_size;

		unsigned int i;

		if (new_ptr == NULL)
			return (NULL);

		for (i = 0; i < min_size; i++)
			((char *)new_ptr)[i] = ((char *)ptr)[i];

		free(ptr);
		return (new_ptr);
	}

}
