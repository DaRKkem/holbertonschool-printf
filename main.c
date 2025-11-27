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
    int len1 = _printf("%%");
	int len2 = _printf("%%%");
	int len3 = _printf("%");
    
	printf("\n%d\n", len1);
	printf("%d\n", len2);
	printf("%d\n", len3);
    

    return (0);
}
