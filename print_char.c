#include "main.h"
/**
 * print_chr - writes characters to output
 * @arguments: input char
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */
int print_chr(va_list arguments, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(arguments, int);
	buf_handl_buf(buf, c, ibuf);

	return (1);
}
