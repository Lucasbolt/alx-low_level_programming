#include "main.h"

/**
 * powt - calculates for a number raised to a particular num
 * @base: base
 * @expo: exponent
 * Return: returns the answer
 */
unsigned int powt(unsigned int base, unsigned int expo)
{
	unsigned int ans = 1;

	if (expo == 0)
		return (1);
	while (expo > 0)
	{
		ans *= base;
		expo--;
	}

	return (ans);
}
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string pointer containing binary literals
 * Return: the decimal equivalent of @b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int index = 0;
	unsigned int power = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		index++;
	}
	index--;

	for (; index >= 0; index--)
	{
		if (b[index] == '0')
			dec += 0 * powt(2, power);
		if (b[index] == '1')
			dec += 1 * powt(2, power);
		power += 1;
	}

	return (dec);
}
