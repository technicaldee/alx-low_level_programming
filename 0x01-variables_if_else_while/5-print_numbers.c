#include <stdio.h>

/**
 * main - prints all possible combinations of single-digits
 *separated by , and followe by a space
 * Return: always 0.
 */

int main(void)
{
int nums;
for (nums = 0; nums <= 9; nums++)
printf("%d", nums);
printf("\n");
return (0);
}
