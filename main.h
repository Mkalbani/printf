#ifndef our_printf
#define our_printf
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* struct specifier - struct specifier
* @valid: the valid character.
* @f: the functions associated.
*
*/

typedef struct specifier
{
	char *valid;

	int (*f)(va_list);
} spec;
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int _putchar(char c);
int print_percent(va_list args);
int (*get_func(char x))(va_list args);
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
int _puts(char *str);
char *convert(unsigned long int num, int base, int lowercase);
#endif
