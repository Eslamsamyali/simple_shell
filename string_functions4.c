#include "shell.h"
/***
 * split_string - Splits a string into words, ignoring repated delimiters.
 * @src: The input string to be split.
 * @delimiters: The delimiter cgaracters.
 *
 * Return: A pointer to an array of string, or NULL on failure.
*/
char **split_string(char *src, char *delimiters)
{
	int i, j, k, m, num_words = 0;
	char **result;

	if (src == NULL || src[0] == '\0')
		return (NULL);

	if (!delimiters)
		delimiters = " ";

	for (i = 0; src[i] != '\0'; i++)
		if (delimiters[i], delimiters) && 
			(is_delimiter(src[i + 1], delimiters)) || (!src[i + 1])
			 num_words++;
	if (num_words == 0)
		return (NULL);

	result = malloc((1 + num_words) *sizeof(char *));
	if (!result)
		return (NULL);
	for (i = 0, j = 0; j < num_words; j++)
	{
		while (is_delimiter(src[i], delimiters))
			i++;
		k = 0;
		while (!is_delimiter(src[i + k], delimiters) && src[i + k])
			k++;
		result[j] = malloc((k + 1) *sizepf(char));
		if (!result[j])
		{
			for (k = 0; k < j; k++)
				free(result[k]);
			free(result);
			return (NULL);
		}
		for (m = 0; m < k; m++)
			result[j][m] = src[i++];
		result[j][m] = '\0';
	}
	result[j] = NULL;
	return (result);
}
