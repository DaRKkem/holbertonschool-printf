#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints a string and arguments (if given)
 *
 * Return: Always nothing.
 */
int _printf(const char *format, ...)
{
	int i, compte = 0;
	va_list args;
	int (*func)(va_list);

	if (!format[i])
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			func = get_func(format[i]);

			if (func)
			{
				compte += func(args);
			}
			else if (format[i] == '%')
			{
				compte += _putchar('%');
			}
			else
			{
				compte += _putchar('%');
				compte += _putchar(format[i]);
			}
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
