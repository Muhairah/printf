#include "main.h"

/**
 * _printf - Printf function
 * @format: character string.
 * Return: number of characters printed.
*/

int _printf(const char *format, ...)
{
	int count = 0;
	va_list list;
	char c, *s;

	va_start(list, format);
	while (*format)
	{
		if (*format == '%' && format++)
		{
			if (*format == 'c')
				c = va_arg(list, int), write(1, &c, 1), count++;
			else if (*format == 's')
				for (s = va_arg(list, char *); *s; s++, count++)
					write(1, s, 1);
			else if (*format != '%')
			{
				va_end(list);
				return (-1);
			}
			else
			{
				write(1, "%", 1);
				count++;
			}
		}
		else
		{
			write(1, format, 1);
				count++;
		}
		format++;
	}
	va_end(list);
	return (count);
}
