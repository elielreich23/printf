#include "main.h"

/**
 * convert_str - set the correct conversion specifier with 
 * the correct conversion function
 * @buf: char parameter that takes the conversion specifier
 * Description: the function loops through the array to match
 * a conversion specifier with a concersion function.
 *
 * Return: NULL if a conversion specifier is not match
 * pointer to function if a conversion specifier matches
 */

unsigned int (*convert_str(char buf))(va_list, flags_t *)
{
	converter c_func[] = {
		{'b', convert_b},
		{'c', convert_c},
		{'d', convert_i},
		{'i', convert_i},
		{'o', convert_o},
		{'p', convert_p},
		{'r', convert_r},
		{'R', convert_R},
		{'S', convert_S},
		{'u', convert_u},
		{'x', convert_x},
		{'X', convert_X},
		{'%', convert_perct},
		{0, NULL}
	};

	int num = 14;
	int i = 0;

	while (i < num)
	{
		if (c_func[i].f == buf)
		{
			return (c_func[i].specifier);
		}
		i++;
	}
	return (NULL);
}

