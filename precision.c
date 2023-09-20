#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int precision = -1;
int curr_i = *i + 1;

	if (format[curr_i] != '.')
		return (precision);

	precision = 0;

	for (curr_i += 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			precision += format[curr_i] - '0';
			precision *= 10;
	}
		else if (format[curr_i] == '*')
		{
			precision = va_arg(list, int);
curr_i++;
			break;
		}
		else
			break;
	}

	*i = curr_i - 1;

	return (precision);
}
