#include <stdio.h>

/**
 * main - prints all possible combinations of single-digits
 *separated by , and followe by a space
 * Return: always 0.
 */

int main(void)
{
int numz;
for (numz = 0; numz <= 9; numz++)
putchar((numz % 10) + '0');
putchar('\n');
return (0);
}
