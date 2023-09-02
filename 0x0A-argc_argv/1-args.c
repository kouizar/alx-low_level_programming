#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 * Description: This function is the entry point of the program.
 * It prints the number of arguments passed (excluding the program name).
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
    (void)argv; /* Ignore argv */
    printf("%d\n", argc - 1);

    return (0);
}
