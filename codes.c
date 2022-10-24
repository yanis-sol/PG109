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

int bissextile(int y) {
  if (((y%4==0)&&(y%100!=0))||(y%400==0)) {
    return 1;
  }
  return 0;
}

int my_strlen(char* str) {
  int len=0;
  while (str[len]!='\0') {
    len+=1;
    }
  return len;


  }





}




  int main(int argc, char*argv[]) {
    int i;
    for (i=0; i<argc; i++) {
      printf("%d\n; %s\n", i, argv[i]);
    }
    return 0;
  }



  int i;
  int s=0;
  for (i=0; i<argc; i++) {
    s=s+atoi(argv[i]);
    printf("%d\n", s);
  }
  return 0;
}


  if (argc>1) {
    int len=my_strlen(argv[1]);
    printf("Taille de %s = %d\n", argv[i],len);

  }
  return 0;
}
