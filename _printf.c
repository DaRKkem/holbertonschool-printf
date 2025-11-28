#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints a string and arguments (if given)
 *
 * Return: compte.
 */
int _printf(const char *format, ...)
{
	int i = 0, compte = 0;
	va_list args;
	int (*func)(va_list);

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (get_func(format[i + 1]) == NULL && format[i + 1] != '%')
				return (-1);
			if (format[i + 1] == '%')
				i++;
		}
		i++;
	}

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			func = get_func(format[i + 1]);

			if (func)
				compte += func(args);
			else if (format[i + 1] == '%')
				compte += _putchar('%');
			i++;
		}
		else
		{
			compte += _putchar(format[i]);
		}
		i++;
	}

	va_end(args);
	return (compte);
}
