#include <stdio.h>
/**
 *main - entry piont
 *Description: print all single number of base 10 start from 0
 *using putchar function
 *Return: 0
 */
int main(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
