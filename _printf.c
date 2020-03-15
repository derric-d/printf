#include "holberton.h"

/**
 * _printf - prints a string depending on format
 * @format: string contains chars and specifier(s)
 * Return: number of bytes of format string printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int (*fptr)(va_list);
	unsigned int index = 0, char_count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[index])
	{
		for (; format[index] && format[index] != '%'; index++)
		{
			_putchar(format[index]);
			char_count++;
		}
		if (!format[index])
			return (char_count);
		
		fptr = get_function(&format[index + 1]);
		if (fptr != NULL)
		{
			char_count += fptr(args);
			index += 2;
			continue;
		}

		if (format[index + 1] == '%')
			index += 2;
		else
			index++;
	}
	va_end(args);
	return (char_count);
}
