#include "holberton.h"
/**
*main - entry piont
*Description: print Holberton folowed by newline
*Return: 0
*/
int main(void)
{
char *word = "Holberton";
int i;

for (i = 0; i < 9; i++)
{
	_putchar(word[i]);

}
_putchar('\n');
return (0);
}
