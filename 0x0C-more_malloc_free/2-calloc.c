#include <stdlib.h>
#include "main.h"

/**
 * *_memset - Fills a memory area with a specified byte
 * @s: Pointer to the memory area to be filled
 * @b: The byte value to be copied
 * @n: The number of bytes to be copied with b
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - Allocates memory for an array of elements
 * @nmemb: The number of elements in the array
 * @size: The size (in bytes) of each element
 *
 * Return: A pointer to the allocated memory (Success),
 *         or NULL if memory allocation fails (Error)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
