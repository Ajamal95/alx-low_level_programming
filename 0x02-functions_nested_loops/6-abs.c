#include "main.h"

/**
 *  _abs - function that computes the absolute
 *  	value of an ineger
 *
 *  0n: takes in integer type input for function
 *
 *  Return: Alwayss 0 (success)
*/

int _abs(int n)
{
	if (n <0)
		n = (-1) * n;
	return (n);
}
