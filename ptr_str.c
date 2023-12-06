#include "main.h"

/**
 * print_str - takes args and cnt as arguments
 * @args: arguments
 * @cnt: counter that add evertime iterate
*/

void print_str(va_list args, int *cnt)
{
	char *str = va_arg(args, char *);

	for (int i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
		(*cnt)++;
	}
}
