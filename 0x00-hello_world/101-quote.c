#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 *main - entry piont print string
 *Return: 1
 */

int main(void)
{
int q = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
write(2,
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
q);
return (1);
}
