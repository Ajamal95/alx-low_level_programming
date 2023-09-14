#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the equare
 *
 * Return: Always 0 (Success)
*/
void print_square(int size)
{
	int row, columm;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('\n');
		_putchar('\n');
	}
}
