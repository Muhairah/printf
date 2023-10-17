#include "main.h"

/**
 * print_bin - prints unsigned int argument in binary format.
 * @arguments: va_list containing the unsigned int argument.
 * @buffer: the buffer to store the printed characters.
 * @index: the current index in the buffer.
 *
 * Return: the number of characters printed.
*/

int print_bin(va_list arguments, char *buffer, unsigned int index);

/**
 * _printf - function outputs  the formatted string
 * @format: string
 * @...: variable arguments
 * Return: the number of characters written
*/

int _printf(const char *format, ...)
{
	va_list arguments;

	va_start(arguments, format);

	int count = 0;
	unsigned int index = 0;
	char buffer[100];

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'b')
			{
				count += print_bin(arguments, buffer, index);
				index += count;
			}
			else
			{
				/* Handle other conversion specifiers as needed */
			}
		}
		else
		{
			buffer[index] = *format;
			count++;
			index++;
		}
		format++;
	}
	va_end(arguments);
	buffer[index] = '\0';
	write(1, buffer, index);
	return (count);
}
int print_bin(va_list arguments, char *buffer, unsigned int index)
{
	unsigned int num = va_arg(arguments, unsigned int);
	int count = 0;

	if (num == 0)
	{
		buffer[index] = '0';
		count++;
	}
	else
	{
		unsigned int temp = num;
		int binary_digits = 0;

		while (temp != 0)
		{
			temp /= 2;
			binary_digits++;
		}
		for (int i = binary_digits - 1; i >= 0; i--)
		{
			int bit = (num >> i) & 1;

			buffer[index] = bit + '0';
			index++;
			count++;
		}
	}
	return (count);
}
