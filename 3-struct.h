#ifndef STRUCT_H
#define STRUCT_H


/**
 * struct types - Struct types
 *
 * @type: The type to search
 * @f: The function associated
 */
typedef struct types
{
	char *type; /* exemple : c, s, d, i, etc... */
	int (*f)();
} types;

#endif /* STRUCT_H */
