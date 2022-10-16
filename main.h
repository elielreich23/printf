#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);


/**
 * specifier_handler - struct that chooses a converstion function
 * depending on the converstion specifier
 * @specifier: a pointer to the corresponding converstion specifier
 * @f: format specifier
 */
typedef struct flags
{
	int hash;
	int neg;
	int plus;
	int space;
	int zero;
} flags_t;

#endif /* MAIN_H */
