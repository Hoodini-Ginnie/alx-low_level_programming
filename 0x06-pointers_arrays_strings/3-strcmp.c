#include "main.h"

/**
 * _strcmp - Compares pointers to two string strings
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 * Retern: If str1 < str2, the -ve difference of the first unmatched characters
 * if str1 == str2, 0
 * if str1 > str2, the +ve difference of the first unmatched character
 */

int _strcmp(char *s1, char *s2)

{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
