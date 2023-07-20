#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed
 *
 * Description: This function can only use _putchar to print.
 */
void print_number(int n)
{
	int m; /* power of 10 */
	int c; /* boolean check */
	int num; /* convert int to long */

	num = n;
	/* Handle negatives */
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	/* Count up */
	m = 1;
	c = 1;
	while (c)
	{
		if (num / (m * 10) > 0)
			m *= 10;
		else
			c = 0;
	}

	/* Count down */
	while (num >= 0)
	{
		if (m == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / m % 10) + '0');
			m /= 10;
		}
	}
}
