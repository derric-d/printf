#include "holberton.h"
/**
 * rot13 - rotates the characters 13 places
 * @args: passed string arguments
 * Return: string rotated
 */
int rot13(va_list args)
{
	char *original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *translate = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *new;
	int i, j;

	new = va_arg(args, char *);

	for (i = 0; new[i] != '\0'; i++)
	{
		for (j = 0; original[j]; j++)
		{
			if (new[i] == original[j])
			{
				_putchar(translate[j]);
				break;
			}
		}
		new++;
	}
	return (i);
}
/**
 * rev_string - reverses a string in place
 * @head: string passed
 * Return: string reversed in place
 */
char *rev_string(char *head)
{

	if (!head)
		return;

	char *tail;
	char h, t;

	tail = head;

	while (*tail)
		++tail;
	--tail;

	for (; head < tail; head++, tail--)
	{
		/*
		* walk pointers inwards until they meet or cross in the middle
		* swap head and tail
		*/
		h = *head;
		t = *tail;
		*head = t;
		*tail = h;
	}
	return (head);
}
/**
 * print_str_reversed - prints string once its been reversed
 * @args: args passed from va_list
 * Return: length of string passed and printed
 */
int print_str_reversed(va_list args)
{
	int len;
	char *src;
	char *dest;

	src = va_arg(args, char *);
	if (!src)
		return (-1);

	dest = rev_string(src);
	if (!dest)
		return (-1);
	len = 0;
	for (len = 0; dest[len] != '\0'; len++)
		_putchar(dest[len]);
	free(dest);
	return (len);
}
