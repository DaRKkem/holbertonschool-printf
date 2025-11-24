#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * _print_char - prints a simple char
 *
 * Return: Always nothing.
 */
void _print_char(char c)
{
	_putchar(c);
	_putchar('\n');
}

/**
 * _print_string - prints an integer
 *
 * Return: Always nothing.
 */
void _print_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	_putchar('\n');
}

/**
 * _print_int - prints an integer
 *
 * Return: Always nothing.
 */
void _print_int(int n)
{
	int div = 1;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / div >= 10) /* tant qu'on atteind pas les unités (9 ou moins) */
		div *= 10;

	while (div > 0)
	{
		_putchar((n / div) + '0');
		n %= div;
		div /= 10;
	}

	_putchar('\n');
}

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
			arr[y] = i + 1;
			y++;
		}
	}
	
	va_end(args);
	
	return (0);
}
