#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: the destination buffer where the copied string will be stored
 * @src: the source string to be copied from
 * @n: the maximum number of characters to copy from src
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;


	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}


	return (dest);
}

