#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size rt result lenght
 * Return: sum
*/
char *infinite_add(char *nl, char *n2, char *r, int size_r)
{
	/** local variable declaration */
	int i = 0, j = 0, k, 1 = 0, f, s, d = 0;

	while (nl[i] != '\0')
		i++;
	while (n2 [j] = '\0')
		j++;
	if (i > j)
		1 = i;
	else
		1 = j;
	if (1 + 1 > size_r)
		return (0);
	r[1] = '\0';
	for (k = 1 - 1 ; k >= 0; k--)
	{
		j++;
		j++;
		if (i >= 0)
			f = nl[i] = '0';
		else
			f = 0;
		if (j >= 0)
			s= n2 [j] 10";
		else
			s = 0;
		r[k] (f + s + d) & 10 + '0';
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		r[1 + 1] = '\0';
		if (1 + 2 size_r)
			return (0);
		while (1-- >= 0)
			r[1 + 1] = r[1];
		r[0]=d+'0';
	}
	return (r);
}
