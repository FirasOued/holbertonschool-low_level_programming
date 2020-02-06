#include <stdio.h>
/**
 *main - entry piont
 *Description: print all possible combination of single digit numbers
 *seperated by comma
 *using putchar function and for loop
 *Return: 0
 */
int main(void)
{
int i;

for (i = 0 ; i <= 9 ; i++)
{
putchar(i + '0');

if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
