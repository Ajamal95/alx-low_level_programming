include "main.h"

/**
 * swaps the values at two intege using two input parameters
 * dat input parameter 1
 * The input parameter 2
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b= temp;
}
