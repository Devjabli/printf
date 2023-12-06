#include "main.h"

/**
 * _printf - takes two arguments format and list of arguments
 * @format: takes count argument
 * Return: cnt
*/

int _printf(const char *format, ...)
{
	va_list args;
	int cnt = 0;

	void (*specifierHls[BUFFER_SIZE])(va_list, int *) = {0};
	void (*hlr)(va_list, int *);

	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			++format;
			specifierHls['c'] = print_char;
			specifierHls['s'] = print_str;
			specifierHls['%'] = print_percint;
			specifierHls['d'] = print_number;
			specifierHls['i'] = print_number;
			hlr = specifierHls[(unsigned char)*format];
			if (hlr != NULL)
			{
				hlr(args, &cnt);
			}
			else
			{
				putchar('%');
				cnt++;
			}
		}
		else
		{
			putchar(*format);
			cnt++;
		}
		++format;
	}
	va_end(args);
	return (cnt);
}
