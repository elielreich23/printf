#include <unistd.h>
#include "main.h"
#include <stdio.h> 


/**
 * _printf - function that prints output according to format
 * @format: string of charaters
 * 
 * Return: the number of characters printed excluding the null byte
 * used end string output
 */

int _printf(const char *format, ...)
{
    va_list ar;
    unsigned int i = 0, buffer_pos = 0, count = 0;
    
}