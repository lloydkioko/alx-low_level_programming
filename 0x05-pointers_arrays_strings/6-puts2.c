#include "main.h"

int _strlen(char *s);

/**
 * puts2 - prints every other character in a string,
 *         starting with the first character
 * @str: string to be manipulated
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 1;
	int len;

	len = _strlen(str);

	if (len == 0)
		;
	else
	{
		_putchar(*str);

		while (i < len)
		{
			if (i % 2 == 1)
				i++;
			else
			{
				_putchar(*(str + i));
				i++;
			}
		}
	}
	_putchar('\n');
}


/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be determined
 * Return: Always 0
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; *s != '\0'; s++) /*counts characters in string until \0. */
		a++;

	return (a);
}
