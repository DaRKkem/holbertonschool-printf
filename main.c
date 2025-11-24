#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int d = -6540;
	char c = 'f';
	char s = "BONJOUR";

	_printf("Int : %d .", d);
	_printf("Char : %c .", c);
	_printf("String : %s .", s);

    return (0);
}
