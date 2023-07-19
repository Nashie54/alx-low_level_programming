#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be comma and space separated.
 * Return: 0
 */

int main(void)
{
	int count = 2;

	long int first = 1, second = 2;
	long int next = first + second;

	printf("%lu, %lu", first, second);

	while (count <= 48)
	{
		printf(", %lu", next);
		first = second;
		second = next;
		next = first + second;
		count++;
	}

	printf("\n");

	return (0);
}

