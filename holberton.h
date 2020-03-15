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

/*functions from specifiers list*/
int print_char(va_list c);
int print_string(va_list s);
int print_percent(va_list i);
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
int rot13(va_list R);

/*main functions*/
int _printf(const char *format, ...);
int get_function(const char *fmt, print_t spec_list[], va_list args);
int _putchar(char c);

/*helper functions */
unsigned int lenbase(unsigned int num, int base);
char *rev_string(char *s);
void _putbase(char *s);
int hexcheck(int num, char hex);
char *_memcpy(char *dest, char *src, unsigned int i);

#endif  /* _HOLBERTON_H */
