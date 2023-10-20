#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define OUTPUT_BUF_SIZE 1024

/**
 * struct print - struct that print a function
 * @type_arg: identifier
 * @f: pointer for functionsto be printed
 *
 * Description: struct that stores pointers print functions.
 */

typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_all;
int _printf(const char *format, ...);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_chr(va_list arguments, char *buf, unsigned int ibuf);
int print_str(va_list arguments, char *buf, unsigned int ibuf);
int print_int(va_list arguments, char *buf, unsigned int ibuf);
int (*print_fun(const char *s, int index))(va_list, char *, unsigned int);
int id_print(const char *s, int index);
unsigned int buf_handl_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
int print_bin(va_list arguments, char *buffer, unsigned int index);

#endif
