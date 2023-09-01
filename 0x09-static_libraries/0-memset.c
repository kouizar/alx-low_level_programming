#include "main.h"
/**
 * _memset - fill a Block of memory with a specific value
 * @s: starting address of memory  filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: Changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

