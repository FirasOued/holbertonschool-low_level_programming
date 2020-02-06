#include <stdio.h>
/**
 *main - entry piont
 *Description: dusplay alphabetic in lowerc&Appper case
 *Return: 0
 */
int main(void)
{
char c, n;

for (c = 'a' ; c <= 'z' ; c++)
{
putchar(c);
}

n = 'A';

while (n <= 'Z')
{
putchar(n);
n++;
}
putchar('\n');
return (0);

}
