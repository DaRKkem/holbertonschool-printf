#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-struct.h"

/**
 * _print_char - prints a simple char
 *
 * Return: Always 1.
 */
int _print_char(char c)
{
	_putchar(c);
	return (1);
}

/**
 * _print_string - prints an integer
 *
 * Return: Always 'compteur'.
 */
int _print_string(char *s)
{
	int i, compteur = 0;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
		compteur++;

	return (compteur);
}

/**
 * _print_int - prints an integer
 *
 * Return: 1 or 'compteur'.
 */
int _print_int(int n)
{
	int div = 1, compteur = 0;  

	if (n == 0)
	{
		_putchar('0');
		compteur++;
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		compteur++;
		n = -n;
	}

	while (n / div >= 10) /* tant qu'on atteind pas les unités (9 ou moins) */
		div *= 10;

	while (div > 0)
	{
		_putchar((n / div) + '0');
		compteur++;
		n %= div;
		div /= 10;
	}
	return (compteur);
}
