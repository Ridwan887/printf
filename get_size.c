#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * Return: the precision.
 */
int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int prc = 0;

	if (format[curr_i] == 'l')
		prc = S_LONG;
	else if (format[curr_i] == 'h')
		prc = S_SHORT;

	if (prc == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (prc);
}
