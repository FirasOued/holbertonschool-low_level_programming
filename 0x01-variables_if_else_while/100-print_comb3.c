#include <stdio.h>
/**
 *main - entry piont
 *Description: Print all possible combinations of two digits.
 * Numbers must be separated by commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits
 * You can only use `putchar`.
 * You can only use `putchar` up to 5 times.
 *Return: 0
 */
int main(void)
{
int i, o, p;
for (i = 0 ; i < 100 ; i++)
{
o = i / 10;
p = i % 10;
if (o < p)
{
putchar(o + '0');
putchar(p + '0');
if (i < 89)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
