#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
	int size = 0;
int curr_i = *i + 1;

	if (format[curr_i] == 'h')
		size = S_SHORT;
else if (format[curr_i] == 'l')
		size = S_LONG;

	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (size);
}
