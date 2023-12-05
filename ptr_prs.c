#include "main.h"

/**
 * print_percint - returns two args
 * @args: data type of list
 * @cnt: counter iterators
*/

void print_percint(va_list args, int *cnt)
{
	(void)args;
	putchar('%');
	(*cnt)++;
}
