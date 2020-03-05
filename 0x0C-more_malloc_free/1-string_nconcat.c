#include <stdlib.h>
#include "holberton.h"


/**
*string_nconcat -function that concatenates two strings
*@s1: pointer point to  first string 
*@s2: pointer point to secode string 
*@n: size of string to add into newstring
*Return: pointer , NULL if fail
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	int i;
	char *p;
	unsigned int j, siz, ln1, ln2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	ln1 = slenght(s1);
	ln2 = slenght(s2);
	siz = (n >= ln2) ? (ln1 + ln2) : (ln1 + n);
	p = malloc(sizeof(char) * siz + 1);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (j = 0; s1[j] != '\0'; i++)
		p[j] = s1[j];

	for (i = 0; j < siz; j++, i++)
		p[j] = s2[i];
	p[i] = '\0';

	return (p);
}



/**
*slenght - function count the lenghtgth of string
*@str: ointer point to a string
*Return: the lenghtgth of string otherwise 0 if fail
*/



int slenght(char *str)
{
	int i;
	unsigned int lenght;

	if (!*str)
		return (0);

	for (i = 0, lenght = 0; str[i] != '\0'; i++, lenght++)
		;

	return (lenght);
}
