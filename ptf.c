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

	void (*specifierHandlers[256])(va_list, int *) = {0};
	void (*handler)(va_list, int *);

	va_start(args, format);

	if (*format == '\0' && format == NULL)
		return (-1);


	for (; *format; ++format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			++format;
			specifierHandlers['c'] = print_char;
			specifierHandlers['s'] = print_str;
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
	}
	va_end(args);
	return (cnt);
}
