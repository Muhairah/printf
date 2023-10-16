#include "main.h"

/**
 * printf_string - funtion print a string
 * @arglst: argument
 * Return: length of a string
*/

int printf_string(va_list, arglst)
{
	char *str;
	int i;
	int l;

	str = va_arg(arglst, char *);
	if (str == NULL)
	{
		str = "(null)";
		l = _strlen(str);
		for (i = 0 ; i < l ; i++)
			_putchar(str[i]);
		return (l);
	}
	else
	{
		l = _strlen(str);
		for (i = 0 ; i < l ; i++)
			_putchar(str[i]);
		return (l);
	}
}
