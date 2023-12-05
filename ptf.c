#include "main.h"

/**
 * _printf - takes two arguments format and list of arguments
 * @format: takes count argument
 * Return: cnt
*/

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	if (*format == '\0')
	{
		va_end(args);
		return (-1);
	}

	int cnt = 0;

	for (; *format; ++format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			++format;
			void (*specifierHandlers[256])(va_list, int *) = {0};
			specifierHandlers['c'] = print_char;
			specifierHandlers['s'] = print_str;
			void (*handler)(va_list, int *) = specifierHandlers[(unsigned char)*format];

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
	}
	va_end(args);
	return (cnt);
}
