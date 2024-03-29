#include "main.h"
/**
 * flip_bits - return number of bits needed to flip to get from one
 * number to another
 * @n: number to convert
 * @m: index of bit to be returned
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;

	for (i = 0; i < (sizeof(n) * 8); i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
	}
	return (count);
}
