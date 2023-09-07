#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Creates an array of integers within a specified range
 * @min: The minimum value in the range (inclusive)
 * @max: The maximum value in the range (inclusive)
 *
 * Return: A pointer to the new array containing integers from min to max,
 *         or NULL if memory allocation fails
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
