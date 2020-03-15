#include "holberton.h"

/**
 * print_char - prints a character
 * @c: character to print
 * Return: number of characters printed
 */
int print_char(va_list c)
{
	char ch = (char)va_arg(c, int);

	return (_putchar(ch));
}

/**
 * print_string - prints a string
 * @s: character string to print
 * Return: number of characters printed
 */
int print_string(va_list s)
{
	int count, string = 0;
	char *ptr = va_arg(s, char *);

	if (ptr == NULL)
		ptr = "(null)";

	for (count = 0; ptr[count]; count++)
	{
		string += _putchar(ptr[count]);
	}
	return (string);
}
