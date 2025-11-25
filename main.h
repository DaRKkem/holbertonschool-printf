#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_func(char c))(va_list);

#endif /* MAIN_H */
