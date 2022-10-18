#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
    int plus;
    int space;
    int hash;
} flags_t;




int _printf(const char *format, ...);
int _putchar(char c);
int (*get_func(char ch))(va_list);
int print_nan(char ch1, char ch2);
int (*get_print(char s))(va_list, flags_t *);
int get_flag(char s, flags_t *f);

#endif
