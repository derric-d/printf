#include "holberton.h"
/**
 * rot13 - rotates the characters 13 places
 * @s: passed string
 * Return: string rotated
 */
char *rot13(va_list args)
{
	char *original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *translate = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *new = va_arg(args, char *);
	int i;

	while (*new)
	{
		for (i = 0; original[i]; i++)
		{
			if (*new == original[i])
			{
				*new = translate[i];
				break;
			}
		}
		new++;
	}
	return (s);
}
/**
 * rev_string - reverses a string in place
 * @head: string passed
 */
void rev_string(va_list args)
{
	char * head;

	head = va_arg(args, char *);

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
}
