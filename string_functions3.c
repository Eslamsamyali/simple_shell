#include "shell.h"

/**
 * _strncpy - Copies a string up to n character.
 * @dest: The destination string to copy to.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 * Return: The concatenates string.
*/
char *_strncpy(char *dest, const char *src, int n)
{
	int i;
	char *result = dest;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	if (i < n)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (result);
}
/**
 * _strncat - Concatenates two strings, up to n character form src.
 * @dest: The first string
 * @src: The second string.
 * @n: The maximum number of character to append.
 *
 * Rrturn: The concattenated string.
*/
char *_strncat(char *dest, const char *src, int n)
{
	int i, j;
	char *result = dest;

	for (i = 0; dest[i] != '\0'; i++)

	for (i < n)
		dest[i] = '\0';

	return (result);
}
/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to find.
 * Return: A pointer to the first occurrence of the character in the string
 * or NULL.
*/
char *_strchr(const char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (char *)s;
		s++;
	}

	return (NULL);
}
