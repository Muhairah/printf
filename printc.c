#include "main.h"

/**
 * printf_char - function to print char
 * @arglst: argumment
 * Return:1
 */

int printf_char(va_list arglst)
{

	char str;

	str = va_arg(arglst, int);
	_putcar(str);

	return (1);
}
