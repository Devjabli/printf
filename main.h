#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024


#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>




int _printf(const char *format, ...);

int print_intg(int value);

void ptr_buffering(char buffer[], int *buff_ind);
void print_str(va_list args, int *cnt);
void print_char(va_list args, int *cnt);
void print_percint(va_list args, int *cnt);
void print_number(va_list args, int *cnt);

#endif
