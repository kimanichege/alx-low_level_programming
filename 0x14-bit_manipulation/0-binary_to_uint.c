#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned interger
 * @b: A pointer to a string containing a binary number
 *
 * Return: The converted number, or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int len, base_two;

	if (!b)
		return (0);

	x = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			x += base_two;
		}
	}

	return (x);
}
