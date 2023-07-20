#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed
 *
 * Description: This function can only use _putchar to print.
 */
void print_number(int n)
{
    int power_of_10 = 1;
    int num = n;

    /* Handle negatives */
    if (num < 0)
    {
        num *= -1;
        _putchar('-');
    }

    /* Calculate the power of 10 */
    while (num / power_of_10 >= 10)
    {
        power_of_10 *= 10;
    }

    /* Print each digit */
    while (power_of_10 > 0)
    {
        _putchar((num / power_of_10) + '0');
        num %= power_of_10;
        power_of_10 /= 10;
    }

    /* If the number was 0, print 0 */
    if (n == 0)
        _putchar('0');
}
