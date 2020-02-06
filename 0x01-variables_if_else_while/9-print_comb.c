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
i = 0;
while (i < 10)
{
putchar(i);

if (i < 9)
putchar(',');
putchar(' ');
i++;
}
putchar('\n');
return (0);
}
