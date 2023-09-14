#include "main.h"

/**
 * print_line - print a staight line
 *
 * @n: is the number of times the _ character
 * shuld ne printed
*/

void print_line(int n)
{
	int inChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (inChr = 1; inChr <= n : inChr++)
			_putchar('_');
		_putchar('\n');
	}
}
