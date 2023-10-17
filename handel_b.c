#include "main.h"

/**
 * print_bin - prints unsigned int argument in binary format.
 * @arguments: va_list containing the unsigned int argument.
 * @buffer: the buffer to store the printed characters.
 * @index: the current index in the buffer.
 *
 * Return: the number of characters printed.
*/

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

/**
 * print_fun - selects the correct function to operate.
 * @s: argument identifier
 * @index: index for the argument identifier
 *
 * Return: pointer to a function.
*/

int (*print_fun(const char *s, int index))(va_list, char *, unsigned int)
{
	print_all pr[] = {
		{"c", print_chr}, {"s", print_str},
		{"i", print_int}, {"d", print_int},
		{"b", print_bin}, {" %", print_prg},
		{NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (pr[i].f);
}
