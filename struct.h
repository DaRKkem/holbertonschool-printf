#ifndef STRUCT_H
#define STRUCT_H
#include <stdarg.h>

int _putchar(char c);
int (*get_func(char c))(va_list);
int _print_char(va_list args);
int _print_string(va_list args);
int _print_int(va_list args);
int _print_uint(va_list args);

/**
 * struct types - Struct types
 *
 * @type: The type to search
 * @f: The function associated
 */
typedef struct spec
{
	char type;
	int (*f)(va_list);
} spec;

#endif /* STRUCT_H */
