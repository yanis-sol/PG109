#include "stdio.h"


int my_isalpha(char x) {
  if (((65<=x)&&(x<=90)) || ((97<=x)&&(x<=122)))  {
    return 1;
  }
  return 0;
}


int my_tolower(char x) {
  if ((65<=x)&&(x<=90)) {
    return x+32;
  }
  else {
    if ((97<=x)&&(x<=122))
    {
    return x;
    }
  }
  return 0;
}




int main() {
  printf("%c\n",my_tolower('A'));
  return 0;
}
