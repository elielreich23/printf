#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/*struct of flags - containing flags to "turn "
* when a flag specifier is passed to _printf()
 * @plus: to handle the '+' character
 * @space: to handle the ' ' character
 * @hash: to handle the '#' character
*/
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/*flags header*/
int get_flag(char s, flags_t *f);

int _printf(const char *format, ...);



#endif /* MAIN_H */