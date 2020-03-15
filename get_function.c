#include "holberton.h"

/**
 * get_function - compares conversion specifier with first index of struct
 * @fmt: format specifier
 * @spec_list: array of structs of print_t type
 * Return: pointer to valid print function
 */
int (*get_function(const char *fmt))(va_list)
{
print_t spec_list[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};
	int i;
	
	for (i = 0; spec_list[i].sym != NULL; i++)
	{
		if (*(spec_list[i].sym) == *fmt)
			break;
	}
	return (spec_list[i].ptr);
}
