#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - entry piont
 *Description: assign a random number n and print if it's +,- or zero
 *Return: 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
