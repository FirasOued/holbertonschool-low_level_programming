#include <stdio.h>
/**
 *main - entry piont
 *Description: print alphabet in lowercase except q and e letter
 *using for loop and putchar function
 *Return: 0
 */
int main(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
if (c != 'q' && c != 'e')
putchar(c);
}
putchar('\n');
return (0);
}
