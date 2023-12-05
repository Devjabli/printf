#include "main.h"

/**
 * print_char - takes list args
 * @args: arguments from va_list
 * @cnt: counter that add everytime iterate
*/

void print_char(va_list args, int *cnt)
{
	int c = va_arg(args, int);

	putchar(c);
	(*cnt++);
}
