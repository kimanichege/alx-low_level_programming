#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguements passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
