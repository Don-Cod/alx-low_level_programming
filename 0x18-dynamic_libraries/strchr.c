#include "main.h"

/**
 * _strchr - finds character in a string
 * @s: string
 * @c: character
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return ((char *)s);
	}
	while (*s++);
	return (0);
}
