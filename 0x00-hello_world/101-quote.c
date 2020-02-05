#include <stdio.h>
/**
 *main - entry piont
 *print string using strlen and write functions
 *Return: 1
 */
int main(void)
{
int quote = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", quote);
return (1);
}
