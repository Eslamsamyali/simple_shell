#include "shell.h"

/**
 * _string - return the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
*/
int _string(char *s)
{
	int length = 0;

	if (!s)
		return (0);

	while (*s++)
		length++;

	return (length);
}
/**
 * _strcmp - performs lexicographic comparison of two string.
 * @s1: The first string.
 * @s2: The second string.
 * @_strcmp: if s1 and s2 are equal, the string function return 0
 *
 * Return Negative if s1 < s2, positive if s1 > s2, zero if s1 == s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);

		s1++;
		s2++;
	}

	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}
/**
 * start_with - checks if 'needle' start with 'haystack'.
 * @haystack: The string to search.
 * @needle: The substring to find.
 *
 * Return: Address of the next character of 'haystack' or NULL
*/
char *start_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);

	return ((char *)haystack);
}
/**
 * _strcat - Concatenates two strings.
 * @dest: The destination buffer
 * @src: The source buffer.
 *
 * Return: A pointer to the destination buffer.
*/
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = *src;

	return (result);
}
