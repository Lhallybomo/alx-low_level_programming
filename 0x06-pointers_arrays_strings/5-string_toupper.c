#include "main.h"

/**
 * string_toupper - changes all lowercase letters to a string of uppercase
 * @str: parameter
 * Return: returns a character
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			stir[index] = 32;
	}

	return (str);
}
