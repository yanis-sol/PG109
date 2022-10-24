#include <stdio.h>

void  swap_var(int* ptr_a, int* ptr_b) {
  int c = *ptr_a;
  *ptr_a = *ptr_b;
  *ptr_b = c;

  printf("swap: a=%d, b=%d\n", *ptr_a, *ptr_b);
  return;
}


void order(int* a, int* b) {
  if (*a>*b) {
    swap_var(a,b);
  }
}


int  main() {
  int val1=7;
  int val2=4;
  order(val1,val2);
  printf("%d, %d\n",val1,val2);

}
