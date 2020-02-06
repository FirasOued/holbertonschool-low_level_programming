#include <stdio.h>
/**
 *main - entry piont
 *Description:  prints the numbers from 00 to 99
 *Numbers must be separated by ,, followed by a space
 *Numbers should be printed in ascending order, with two digits
 *using putchar function
 *Return: 0
 */
int main(void)
{
int i, o, p;
for (i = 0 ; i < 100 ; i++)
{
o = i / 10;
p = i % 10;
putchar(o + '0');
putchar(p + '0');

if (i < 99)
{
putchar(',');
putchar(' ');
}

}
putchar('\n');
return (0);
}
