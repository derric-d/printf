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
 * @fptr: pointer to function to print
 */
struct specifier_functions
{
	char *sym;
	int (*fptr)(va_list);
};
typedef struct specifier_functions print_t;

int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_int(va_list d);
int print_int(va_list i);
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
int get_function(const char *fmt, print_t spec_list[], va_list args);
int _putchar(char c);

#endif  /* _HOLBERTON_H */
