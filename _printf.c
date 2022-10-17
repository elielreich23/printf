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
  int (*p_func)(va_list, flags_t *);
  const char *m;
  va_list arguments;
  flags_t flag = {0, 0, 0};
    
}