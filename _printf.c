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
	int i = 0;
	va_list args; /* args = liste des arguments*/

	va_start(args, format);

	va_arg(args, char);

	return (0);
}
