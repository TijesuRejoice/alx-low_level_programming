#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: array input
 * @size: array size
 * @action: pointer to the function
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
