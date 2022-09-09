#include <stdio.h>

/**
 * main - prints all possible combinations of single-digits
 *separated by , and followe by a space
 * Return: always 0.
 */

int main(void)
{
char alphabets;
for(alphabets = 'a'; alphabets <= 'z'; alphabets++)
  putchar(alphabets);
for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
putchar(alphabets);
putchar('\n');
return (0);
}
