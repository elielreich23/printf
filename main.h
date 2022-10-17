#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

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

/* convert_string */
int (*convert_str(char buf))(va_list, flags_t *);

/* flags */
int get_flag(char s, flags_t *f);

