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
	int r;
	r = _printf("%");
	printf("\n%d\n", r);
	return (0);
}
