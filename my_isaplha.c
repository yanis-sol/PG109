#include "stdio.h"


int my_isalpha(char x) {
  if (65<=x<=90) {
    return 1;
  }
  elif (97<=x<=122) {
    return 1;
  }
  return 0;
}

int main() {
  my_isalpha();
  return 0;
}
