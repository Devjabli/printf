#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int _printf(const char *format, ...);

void print_str(va_list ags, int *cnt);
void print_char(va_list args, int *cnt);

#endif
