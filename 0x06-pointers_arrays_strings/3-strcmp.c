#include "main.h"

/**
 * _strcmp - Compares strings values
 * @s1: input value
 * @s2: input value
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
