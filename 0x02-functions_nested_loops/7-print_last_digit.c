#include "main.h"

/**
 * preint_last_digit - print last digit of a number.
 *
 * 0n: takes number input
 *
 * Return: lastDigit
*/

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;
	
	_putchar(lastDigit + '0');
	return (lastDigit);
}
