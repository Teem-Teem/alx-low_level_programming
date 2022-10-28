#include "main.h"

/**
 * flip_bits - Find the number of bits needed to flip to change
 * one number to the other
 * @n: First number to check bits
 * @m: Second number to check bits
 *
 * Return: Number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
