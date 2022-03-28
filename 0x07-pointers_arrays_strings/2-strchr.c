#include "main.h"

/**
 * *_strchr - finds the character in a string.
 *
 * @c: the character to be located
 * @s: string to be checked
 *
 * Return: the location of first occurence of a character or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *z;

	z = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			z = &s[i];
			break;
		}
	}
	if (s[i] == c)
	{
		z = &s[i];
	}
	return (z);
}
