#include "holberton.h"

/**
 * print_num - prints typical int to stdout
 * @args: arg from arglist of printf
 * Return: number of characters printed by this function
 */
int print_num(va_list args)
{
	int numchars, num, div;
	unsigned int unsigned_num;

	div = 1;
	num = va_arg(args, int);

	if (num < 0)
	{
		numchars += _putchar('-');
		unsigned_num = num * -1;
	}
	else
		num = n;

	while (num / div > 9)
		div = div * 10;

	while (div != 0)
	{
		numchars += _putchar(num / div + '0');
		num %= div;
		div = div / 10
	}
	return (numchars);
}
/**
 * print_num_unsigned - prints unisgined ints
 * @n: unsigned int being passed
 * Return: number of characters printed by this function
 */
int print_num_unsigned(unsigned int n)
{
	int numchars, num, div;
	unsigned int unsigned_num;

	div = 1;
	num = va_arg(args, int);

	num = n;

	while (num / div > 9)
		div = div * 10;

	while (div != 0)
	{
		numchars += _putchar(num / div + '0');
		num %= div;
		div = div / 10
	}
	return (numchars);
}
