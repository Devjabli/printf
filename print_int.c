#include "main.h"

/**
 * print_intg - takes one argument
 * @val: int
 * Return: prt
*/

int print_intg(int val)
{
	char buffer[32];
	int i;
	int prt = snprintf(buffer, sizeof(buffer), "%d", val);

	for (i = 0; i < prt; i++)
	{
		putchar(buffer[i]);
	}
	return (prt);
}
