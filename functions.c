#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

/**
 * _print_char - prints a simple char
 *
 * Return: Always 1.
 */
int _print_char(va_list args)
{
	char c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * _print_string - prints an integer
 *
 * Return: Always 'compteur'.
 */
int _print_string(va_list args)
{
	int i, compteur = 0;
	char *s = va_arg(args, char *);

	if (!s)
        s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
		compteur += _putchar(s[i]);

	return (compteur);
}

/**
 * _print_int - prints an integer
 *
 * Return: 1 or 'compteur'.
 */
int _print_int(va_list args)
{
	int div = 1, compteur = 0;
	int n = va_arg(args, int);

	if (n == 0)
	{
		compteur += _putchar('0');
		return (1);
	}

	if (n < 0)
	{
		compteur += _putchar('-');
		n = -n;
	}

	while (n / div >= 10) /* tant qu'on atteind pas les unités (9 ou moins) */
		div *= 10;

	while (div > 0)
	{
		compteur += _putchar((n / div) + '0');
		n %= div;
		div /= 10;
	}
	return (compteur);
}

/**
 * _print_uint - prints an unsigned integer
 *
 * Return: 1 or 'compteur'.
 */
int _print_uint(va_list args)
{
	int div = 1, compteur = 0;
	int n = va_arg(args, int);

	if (n == 0)
	{
		compteur += _putchar('0');
		return (1);
	}

	if (n < 0)
	{
		n = -n;
	}

	while (n / div >= 10) /* tant qu'on atteind pas les unités (9 ou moins) */
		div *= 10;

	while (div > 0)
	{
		compteur += _putchar((n / div) + '0');
		n %= div;
		div /= 10;
	}
	return (compteur);
}
