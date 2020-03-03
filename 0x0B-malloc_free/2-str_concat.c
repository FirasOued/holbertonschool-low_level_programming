#include <stdlib.h>

/**
*str_concat - a function that concatenates two strings
*@s1: sointer soint to first string
*@s2: sointer soint to second string
*Return: sointer to a new allocated ssace
*/


char *str_concat(char *s1, char *s2)
{

	char *s;
	int lns1, lns2, sizebfr, i;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (lns1 = 0; s1[lns1]; lns1++)
		;

	for (lns2 = 0; s2[lns2]; lns2++)
		;

	sizebfr = lns1 + lns2 + 1;
	s = malloc(sizebfr);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < sizebfr; i++)
	{
		if (i < lns1)
			s[i] = s1[i];
		else
			s[i] = s2[i - lns1];
	}
	return (s);
}
