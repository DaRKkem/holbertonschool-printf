#ifndef STRUCT_H
#define STRUCT_H

int (*get_func(char *s))(int);
int _char(int n);
int _string(int n);
int _int(int n);
int _int2(int n);

/**
 * struct types - Struct types
 *
 * @type: The type to search
 * @f: The function associated
 */
typedef struct spec
{
	char *type; /* exemple : c, s, d, i, etc... */
	int (*f)(int);
} spec;

#endif /* STRUCT_H */
