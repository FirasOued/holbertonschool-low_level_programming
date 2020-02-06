#include <stdio.h>
/**
 *main - entry piont
 *Description: print all numbers of base 16 in lowercase followed by newline
 *using putchar function
 *Return: 0
 */
int main(void)
{
int i;
char c;

for (i = 0 ; i < 10 ; i++)
{
putchar(i + '0');
}
c = 'a';
while (c <= 'f')
{
putchar(c);
c++;
}

putchar('\n');
return (0);
}
