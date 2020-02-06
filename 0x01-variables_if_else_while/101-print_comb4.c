#include <stdio.h>

/**
 *main - entry piont
 *Description: prints all possible different combinations of three digits
 *umbers must be separated by ,, followed by a space
 *The three digits must be different
 *012, 120, 102, 021, 201, 210 are considered the same combination of
 *the three digits 0, 1 and 2
 *Print only the smallest combination of three digits
 *Numbers should be printed in ascending order, with three digits
 *You can only use the putchar function (every other function
 *Return: 0
 */

int main(void)
{

int i, o, p, k;
for (i = 0; i < 1000; i++)

{

o = i / 100;
p = (i / 10) % 10;
k = i % 10;

if (o < p && p < k)
{
putchar(o + '0');
putchar(p + '0');
putchar(k + '0');

if (i < 700)
{
putchar(',');
putchar(' ');

}
}
}
putchar('\n');
return (0);
}
