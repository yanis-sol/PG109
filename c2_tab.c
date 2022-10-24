#include<stdio.h>

int main() {
  int tab[5] = {2,3,15,-3,3};
  int max=0;
  int len=5;

  //affiche les elements du tableau
  int i=0;
  int j=0;
  for (j=0; j<len; j++){
    int x=0;
      while(i<len) {
        printf("case %d : %d\n", i, tab[i]);
        i+=1;
        if (max<tab[i])
        {max=tab[i];
        }
        if (j=tab[i]) {
          return x++;
        }
        else{
          return x;
        }
      }
  }
  printf( " %d\n " , max);
  return 0;
}

int (int n, int tab) {

}
