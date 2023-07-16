#include <stdio.h>

/**
 * main - Prints alphabet from z to a
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
