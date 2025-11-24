#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-struct.h"

/**
 * get_func - get the function needed
 * @s: operator passed as argument
 *
 * Return: function needed or NULL
 */
int (*get_func(char *s))(int n)
{
	int i = 0;

	spec container[] = {
		{"c", _char},
		{"s", _string},
		{"d", _int},
		{"i", _int},
		{NULL, NULL}
	};

	while (container[i].type != NULL)
	{
		if (strcmp(container[i].type, s) == 0)
			return (container[i].f);
		i++;
	}
	return (NULL);
}
