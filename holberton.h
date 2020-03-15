#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>

/**
 * struct specifier_functions - struct to choose function based on specifier
 * @sym: format specifier
 * @ptr: pointer to function to print
 */

typedef struct specifier_functions
{
	char *sym;
	int (*ptr)(va_list);
} print_t;

int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list d);
int print_int(va_list i);
int print_percent(va_list i);
int print_binary(va_list b);
int print_octal(va_list o);
int print_unsigned(va_list u);
int print_hex(va_list x);
int print_HEX(va_list X);
int print_address(va_list p);
int print_S(va_list S);
int print_rev(va_list r);
int print_rot13(va_list R);
int _printf(const char *format, ...);
int (*get_function(const char *fmt))(va_list);
int _putchar(char c);

#endif  /* _HOLBERTON_H */
