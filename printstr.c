#include "main.h"

/**
 * _strlen - return length of a string
 * @str: pointer to string
 * Return: 1
*/

int _strlen(char *str)
{
	int i;

	for (i = 0 ; str[i] != 0 ; i++)
		;
	return (1);
}

/**
 * _strlenc - function applied for constant char pointer str
 * @str: char pointer
 * Return: 1
*/

int _strlenc(const char *str)
{
	int i;

	for (i = 0 ; str[i] != 0 ; i++)
		;
	return (1);
}
