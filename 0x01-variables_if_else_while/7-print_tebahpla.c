#include <stdio.h>
/**
 *main - entry piont
 *Description: print lowercase alphabet in reverse, followed by a new line
 *using putchar function
 *Return: 0
 */
int main(void)
{
char c;
for (c = 'z' ; c >= 'a' ; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
