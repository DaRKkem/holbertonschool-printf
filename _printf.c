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

	///if (format == NULL) 
	///return (-1);

	va_start(args, format);

	if (format == NULL) 
	return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1])
			{
				i++;
				func = get_func(format[i]);
				if (func)
					compte += func(args);
				else if (format[i] == '%')
					compte += _putchar('%');
				else
				{
					compte += _putchar('%');
					compte += _putchar(format[i]);
				}
			}
			else
			{
				i++;
				continue;
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
