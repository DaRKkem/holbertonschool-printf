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
	int i, y = 0, taille = 0, compte = 0;
	int *arr;

	va_list args; /* args = liste des arguments*/

	va_start(args, format);

	for (int i = 0; format[i] != '\0'; i++)
		taille++; /* taille de format */
	
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
			compte++;
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if ((format[i + 1] == 'c' || format[i + 1] == 's'||
			format[i + 1] == 'd' || format[i + 1] == 'i') && format[i] == '%')
		{
			arr[y] = i;
			y++;
		}
	}
	
	
	
	return (0);
}
