#include "main.h"

/**
 * _isupper - prints uppercase letter
 * @c: character to be checked
 *
 * Return: returns 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
