#include "main.h"
/**
 * id_print - returns the identifiers amount.
 * @s: argument indentifier
 * @index: index of argument identifier.
 * Return: amount of identifiers.
 */
int id_print(const char *s, int index)
{
	print_all pr[] = {
		{"c", print_chr}, {"s", print_str}, {"i", print_int},
		{"d", print_int}, {" %", print_prg},
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
	return (j);
}
