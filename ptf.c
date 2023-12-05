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

	void (*specifierHandlers[300])(va_list, int *) = {0};
	void (*handler)(va_list, int *);

	va_start(args, format);

	if (format == NULL && format[0] == '\0')
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			++format;
			specifierHandlers['c'] = print_char;
			specifierHandlers['s'] = print_str;
			specifierHandlers['%'] = print_percint;
			specifierHandlers['d'] = print_number;
			specifierHandlers['i'] = print_number;
			handler = specifierHandlers[(unsigned char)*format];
			if (handler != NULL)
			{
				handler(args, &cnt);
			}
			else
			{
				putchar(*format);
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
