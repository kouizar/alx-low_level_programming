#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prinT name using poinTer to funcTion
 * @name: sTring To add
 * @f: pointer To function
 * Return: noThing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
