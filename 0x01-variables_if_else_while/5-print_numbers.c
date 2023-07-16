#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * followe by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');

	return (0);
}
