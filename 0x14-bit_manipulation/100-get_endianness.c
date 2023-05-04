#include "main.h"

/**
 * get_endianness - checks the endianness of machine
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int m;
	char *n;

	m = 1;
	n = (char *) &m;

	return ((int)*n);
}
