#include <stdio.h>

int main(void){
int numz;
for (numz = 0; numz <= 9; numz++)
  putchar((numz % 10) + '0');
putchar('\n');
return (0);
}
