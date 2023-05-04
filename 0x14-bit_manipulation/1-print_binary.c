#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	/* check if number is 0 */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* determine highest order bit position */
	unsigned long int mask = 1;
	unsigned long int highest_bit = 0;
	while (mask <= n)
	{
		highest_bit++;
		mask <<= 1;
	}

	/* print binary digits from highest order to lowest */
	for (unsigned long int i = highest_bit - 1; i > 0; i--)
	{
		mask >>= 1;
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
	}
}
