#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: The unsigned long integer to extract a bit from.
 * @index: index of the bit.
 *
 * Return: The value of the bit at index index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int y;

	if (n == 0 && index < 64)
		return (0);

	for (y = 0; y <= 63; n >>= 1, y++)
	{
		if (index == y)
		{
			return (n & 1);
		}
	}

	return (-1);
}
