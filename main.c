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
    int len = _printf("%%");
	int len2 = _printf("%");
	
    _printf("\n");
    _printf("Return value: %d\n", len);

    
    _printf("\n");
    _printf("Return value: %d\n", len2);

    return (0);
}
