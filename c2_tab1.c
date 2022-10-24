#include <stdio.h>

void display_tab(int tab[], int len) {
  int i;
  for (i=0; i<len; i++) {
    printf("Case i = %d, tab [i]=%d, adresse %p\n", i, tab[i], &tab[i]);
  }
}

int max_tab(int tab[],int len) {
  int max=0;
  int i=0;
  for (i=0; i<len; i++) {
    if (max<tab[i])
    {
      max=tab[i];
    }
  }
  printf( " %d\n ", max);
}

void min_max(int len, int tab[], int* min, int* max) {
  int i;
  for (i=0;i<len;i++) {
    if (tab[i]<*min) {
      *min=tab[i];
    }
    if (tab[i]>*max) {
      *max=tab[i];
    }
  }
  printf("min = %d\n, max = %d\n", *min, *max );
}


int research_tab(int val, int tab [], int len) {
  return 1; //0 sinon
}


int  main() {
  int  tab [5] = {2,3,15,-3,3};
  int  len = 5;
  int* min;
  int* max;
  min_max(len, tab,&min,&max);
}
