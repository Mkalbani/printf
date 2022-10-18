#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 *_printf - produces output according to a format.
 * @format: format to be printed
 * Return: no. of character printed
 */

int _printf(const char *format, ...)
{
	int i, j;
	int (*f)(va_list);
	
	va_list list;

	va_start(list, format);  
	if (format == NULL)
		return (-1);

	i = j = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			f = get_func(format[i + 1]);
			if (f == NULL)
				j += print_nan(format[i], format[i + 1]);
			else
				j += f(list);
			i++;
		}
		else
		{
			_putchar(format[i]);
			j++;
		}
		i++;
	}

	va_end(list);
	return (j);
}
