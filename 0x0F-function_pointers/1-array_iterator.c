#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - iterates an array
 * @array: is an array
 * @size: is the size
 * @action: is something
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
