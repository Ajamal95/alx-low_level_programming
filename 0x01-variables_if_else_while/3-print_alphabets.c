#include <stdio.h>
/**
 * main -Entery point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
*/
int main (void)

	char ch = 'a';
	char ch = 'A';
	/*prints a -z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print A - Z*/
	while (ch <= "Z")
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0):