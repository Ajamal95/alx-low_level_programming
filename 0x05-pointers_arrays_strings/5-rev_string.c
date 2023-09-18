#include "main.h"

/**
 * rev_string - reverse a scring
 * @s: string parameter input
 * Return: Nothing
*/

void rev_string(char *s)
{
	int 1, i;
	char temp;

	/*Eind string length with all char*/
	for (1 = 0; s[1] != '\0'; ++1)
		;

	/*was the string hy looting to half the string*/
	for (i = 0; i < 1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[1 - 1 - i]; /*-1 because the array starts from 0 */
		s[1 - 1 - i] = temp;
	}
}
