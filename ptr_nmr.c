#include "main.h"

/**
 * print_number - takes arguments args and iterator cnt
 * @args: data type
 * @cnt: iterator
*/

void print_number(va_list args, int *cnt)
{
	int prt_x = 0;
	int x = va_arg(args, int);

	prt_x = print_intg(x);
	cnt++;
}
