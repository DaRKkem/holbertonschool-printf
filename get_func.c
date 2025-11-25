#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"
#include "main.h"

/**
 * get_func - get the function needed
 * @s: operator passed as argument
 *
 * Return: function needed or NULL
 */
int (*get_func(char c))(va_list)
{
	int i = 0;

	spec container[] = {
		{'c', _print_char},
		{'s', _print_string},
		{'d', _print_int},
		{'i', _print_int},
		{'u', _print_uint},
		{'\0', NULL}
	};

	while (container[i].type != '\0')
	{
		if (container[i].type == c)
			return (container[i].f);
		i++;
	}
	return (NULL);
}
