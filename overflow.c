#include <stdio.h>
int main() {

  unsigned char x=1;
  unsigned char min = x;
  unsigned char max = x;
  while (x!=0) {
    printf("La valeur de x est : %hhu\n", x);
    x+=1;
    if (x < min) {
      min = x;
    }
    if (x > max) {
      max = x;
    }
  }
  printf("pour un char: [%hhu,%hhu]\n", min, max);
  return 0;
}
