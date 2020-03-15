#include "holberton.h"
/**
 * print_char - prints a character
 * @list: list of arguments
 * Return: number of characters printed
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - prints a string
 * @list: list of arguments
 * Return: number of characters printed
 */
int print_string(va_list list)
{
	int i;
	char *ptr = va_arg(list, char *);

	if (ptr == NULL)
		ptr = "(null)";

	for (i = 0; ptr[i] != '\0'; i++)
		_putchar(ptr[i]);
		
	return (i);
}
