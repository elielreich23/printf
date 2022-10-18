#include <unistd.h>

/**
* _putchar - function to print
* return: 1 if succeful and -1 if not
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
