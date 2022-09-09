#include <stdio.h>

int main(void)
{
  char hex;
  int num;

  for (num = 0; num <=9; num++)
    putchar((num%10)+'0');
  for (hex = 'a'; hex<='f'; hex++)
    putchar(hex);
  putchar('\n');
  return (0);
}
