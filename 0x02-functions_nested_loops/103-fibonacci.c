#include <stdio.h>

/**
 * main - Finds and prints the sum of Even Fibonacci numbers
 * followed by a new line
 * Return: Always 0 (success)
 */

int main(void)

{
	int i = 0;
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++1)
	{
	if (j < 4000000 && (j % 2) == 0)
	{
	sum = sum + j;
	}
	next = j + k;
	j = k;
	k = next;
	}
	printf("%lu\n", sum);
	return (0);
}
