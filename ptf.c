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

	va_start(args, format);


	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (format == "\0" || format == NULL)
				return (-1);
			switch (*format)
			{
				case 'c':
					{
						int c = va_arg(args, int);

						putchar(c);
						cnt++;
						break;
					}
				case 's':
					{
						char *str = va_arg(args, char *);

						fputs(str, stdout);
						cnt += strlen(str);
						break;
					}
				case '%':
					putchar('%');
					cnt++;
					break;
				default:
					putchar('%');
					putchar(*format);
					cnt += 2;
					break;
			}
		}
		else
		{
			putchar(*format);
			cnt++;
		}
		format++;
	}
	va_end(args);
	return (cnt);
}

