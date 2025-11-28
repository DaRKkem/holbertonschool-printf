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
	int r = _printf("1234%%%s", "test");
	printf("\n%d\n", r);
    return (0);
}
