#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
int printf_char(va_list arglst);
int _printf(const char *format, ...);
int printf_string(va_list, arglst);
int _strlen(char *str);
int _strlenc(const char *str);

#endif
