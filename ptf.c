#include "main.h"

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int count = 0;

    while (*format) {
        if (*format == '%') {
            format++; // Move past '%'
            switch (*format) {
                case 'c': {
                    int c = va_arg(args, int);
                    putchar(c);
                    count++;
                    break;
                }
                case 's': {
                    char *str = va_arg(args, char *);
                    fputs(str, stdout);
                    count += strlen(str);
                    break;
                }
				case 'd': {
					double d = va_arg(args, double);
					putchar(d);
					count++;
					break;

				}
                case '%':
                    putchar('%');
                    count++;
                    break;

                default:
                    // Handle unknown specifier
                    putchar('%');
                    putchar(*format);
                    count += 2;
                    break;
            }
        } else {
            putchar(*format);
            count++;
        }

        format++;
    }

    va_end(args);

    return count;
}