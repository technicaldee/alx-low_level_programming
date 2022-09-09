#include <stdio.h>

/**
 * main - prints all possible combinations of single-digits
 *separated by , and followe by a space
 * Return: always 0.
 */

int main(void)
{
char tebahpla;

for(tebahpla = 'z'; tebahpla >= 'a'; tebahpla--)
putchar(tebahpla);
putchar('\n');
return (0);
}
