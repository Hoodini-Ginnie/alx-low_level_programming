#include "main.h"

/**
 * print_last _digit - Prints the last digit of a number
 * @n: The int to extract the last digit
 * Return: Value of the last digit of number
 */

int print_last_digit(int n)

{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
