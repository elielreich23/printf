#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);


/**
 * specifier_handler - struct that chooses a conversion function
 * depending on the conversion specifier
 * @specifier: a pointer to the corresponding conversion specifier
 * @f: format specifier
 */
typedef struct specifier_handler
{
	int(*specifier)(va_list arg, flags_t *specifier);
	char f;
} converter;

#endif /* MAIN_H */
