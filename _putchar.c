#include "holberton.h"

/**
 * write_char - writes one character to stdout
 * @c: character we are writing
 * Return: 1 on success
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
