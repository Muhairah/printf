#include "main.h"
#include <stdio.h>
/**
 * print_prg - write the persent sign to out put
 * @a: input char
 * @buf: buffer pointer
 * @i: index for buffer pointer
 * Return: On success 1.
 */
int print_prg(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
	buf_handl_buf(buf, '%', i);

	return (1);
}
