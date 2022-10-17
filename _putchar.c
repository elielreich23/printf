#include <unistd.h>

/**
* _putchar writes character to stdout  
* @c: charater to be printed
* return: 1 if succeful and -1 if not 
*/

int _putchar(char c)
{
    return (write(1, &c, 1));
}