#include "holberton.h"

/**
 * print_binary - prints inout as binary value
 * @args: argument string passed
 * Return: Number of characters printed
 */
int print_binary(va_list args)
{
	unsigned int num;
	int i, len;
	char *str;
	char *reverse;

	num = va_arg(args, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = lenbase(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		str[i] = num % 2;
		num = num / 2;
	}
	#if 0
	for (i = i - 1; i >= 0; i--)
	{
		_putbase(str[i]);
	}
	#endif
	reverse = rev_string(str);
	if (reverse == NULL)
		return (-1);

	_putbase(reverse);
	free(str);
	free(reverse);
	return (len);
}
#if 0
char *_itoa(int num, char str*, int base)
{
	int i, isnegative;

	if (num == 0)
	{
		str[i++] = '\0';
		str[i] = '\0';
		return str;
	}

	if (num < 0)
	{
		

	}
}
#endif
/**
 * print_octal - prints input as octal value
 * @args: arguments list passed
 * Return: Number of characters printed
 */
int print_octal(va_list args)
{
	unsigned int num;
	int len;
	char *oct;
	char *reverse;

	num = va_arg(args, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num <= 0)
		return (-1);
	len = lenbase(num, 8);

	oct = malloc(sizeof(char) * len + 1);
	if (oct == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		oct[len] = (num % 8) + 48;
		num /= 8;
	}
	oct[len] = '\0';
	reverse = rev_string(oct);
	if (reverse == NULL)
		return (-1);

	_putbase(reverse);
	free(oct);
	free(reverse);
	return (len);
}

/**
 * print_hex - prints input as hexidecimal value
 * @args: list of arguments passed
 * Return: Number of characters printed
 */
int print_hex(va_list args)
{
	unsigned int num;
	int len, ret_val;
	char *hex_num;
	char *reverse;

	num = va_arg(args, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num <= 0)
		return (-1);
	len = lenbase(num, 16);
	hex_num = malloc(sizeof(char) * len + 1);
	if (hex_num == NULL)
		return (-1);

	for (len = 0; num > 0; len++)
	{
		ret_val = num % 16;
		if (ret_val > 9)
		{
			ret_val = hexcheck(ret_val, 'x');
			hex_num[len] = ret_val;
		}
		else
			hex_num[len] = ret_val + 48;
		num /= 16;
	}
	hex_num[len] = '\0';
	reverse = rev_string(hex_num);
	if (reverse == NULL)
		return (-1);

	_putbase(reverse);
	free(hex_num);
	free(reverse);
	return (len);
}

/**
 * print_HEX - prints input as UPPERCASE hexidecimal value
 * @args: list of arguments passed
 * Return: Number of characters printed
 */
int print_HEX(va_list args)
{
	unsigned int num;
	int len, ret_val;
	char *hex_num;
	char *reverse;

	num = va_arg(args, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num <= 0)
		return (-1);
	len = lenbase(num, 16);
	hex_num = malloc(sizeof(char) * len + 1);
	if (hex_num == NULL)
		return (-1);

	for (len = 0; num > 0; len++)
	{
		ret_val = num % 16;
		if (ret_val > 9)
		{
			ret_val = hexcheck(ret_val, 'X');
			hex_num[len] = ret_val;
		}
		else
			hex_num[len] = ret_val + 48;
		num /= 16;
	}
	hex_num[len] = '\0';
	reverse = rev_string(hex_num);
	if (reverse == NULL)
		return (-1);

	_putbase(reverse);
	free(hex_num);
	free(reverse);
	return (len);
}
