#include "holberton.h"

/**
 * get_function - finds function that we need
 * @fmt: format string passed
 * @spec_list: list of format structs we are parsing through
 * @args: arguments passed in _printf function call
 * Return: number of arguments called
 */
int get_function(char *fmt, print_t spec_list, va_list args)
{
	int i, j, ret_val, num_chars

	for (i = 0; fmt[i] != '\0'; i++)
	{
		if (fmt[i] == %) /* if we come across magic symbol*/
		{
			for (j = 0; spec_list[j].sym != NULL; j++)
			{
				if (fmt[i + 1] == spec_list[j].sym[0]) /*if match w/ struct sym member*/
					ret_val = spec_list.fptr(args); /*call the func at index j if match*/

				if (ret_val == -1)
					return (-1);

				numchars += ret_val;
				break;
			}
			/*case no match, still string:print current char, next char &add to count*/
			if (spec_list.sym == NULL && fmt[i + 1] == ' ')
				if (fmt[i + 1] != '\0')
				{
					write_char(fmt[i]);
					write_char(fmt[i + 1]);
					numchars += 2;
				}
				return (-1);
		}
		else
		{
			write_char(fmt[i]);
			numchars++;
		}
	}
	return (numchars);
}