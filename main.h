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
typedef struct specifier_handler
{
	int(*specifier)(va_list arg, flags_t *specifier);
	char f;
} converter;

#endif /* MAIN_H */
