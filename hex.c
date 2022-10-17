#include "main.h"

/**
 * hex - print unsigned int in hexadecimals
 * @a: value to print
 * @b: case to determine case of printing
 * return: value of printed digit
 */

int print_hex(unsigned int a, unsigned int b)
{
    unsigned int c[8];
    unsigned int i, m, sum;
    char diff;
    int counter;

    m = 268435456; /* (16 ^ 7) */
    if (b)
        diff = 'A' - ':';
    else
        diff = 'a' - ':';
    c[0] = a / m;
    for (i = 1; i < 8; i++)
    {
        m /= 16;
        c[i] = (b / m) % 16;
    }
    for (i = 0, sum = 0; counter = 0; i < 8, i++)
    {
        sum += c[i];
        if (sum || i == 7)
        {
            if (c[i] < 10)
            _putchar('0' + c[i]);
            else 
            _putchar('0' + diff + c[i]);
            counter++;
        }
    }
    return (counter);
}

/**
 * print_x - takes an unsigned int and prints it in lowercase hex notation
 * @x: unsigned int to print
 *
 * Return: number of digits printed
 */

int print_X(va_list X)
{
    return (print_hex(va_arg(X, unsigned int), 1));
}

/**
 * _pow - calculates  exponent
 * @base: base of exponent
 * @exponent: exponent of number
 *
 * Return: base ^ exponent
 */

static unsigned long_pow(unsigned bas, unsigned int expo)
{
    unsigned int i;
    unsigned long ans = bas;

    for (i = 1; i < expo; i++)
    {
        ans *= bas;
    }
    return (ans);
}

/**
 * print_p - prints  address
 * @p: address to printtofk
 *
 * Return: number of characters to print
 */

int print_p(va_list p)
{
	int count = 0;
	unsigned int a[16];
	unsigned int i, sum;
	unsigned long n, m;
	char *str = "(nil)";

	n = va_arg(p, unsigned long);
	if (n == 0)
	{
		for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
			count++;
		}
		return (count);
	}
	_putchar('0');
	_putchar('x');
	count = 2;
	m = _pow(16, 15); /* 16 ^ 15 */
	a[0] = n / m;
	for (i = 1; i < 16; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + ('a' - ':') + a[i]);
			count++;
		}
	}
	return (count);
}