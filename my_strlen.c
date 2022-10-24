int my_strlen(char* str) {
  int len=0;
  while (str[len]!='\0') {
    len+=1;
    }
  return len;


  }

char* chaine_miroir (char str[]) {
  int len = my_strlen(str);
  char miroir[len+1];
  int i;
  for (i=0; i<len; i++) {
    miroir[i]=str[len-1-i];
  }
  miroir[len]='\0';
  return miroir;
}

int my_atoi(char str[]) {
  int len=my_strlen(str);
  int res = 0;
  int pow = 1;
  int i;
  for (i=len-1;i>=0;i--) {
    res+=(str[i]-48)*pow;
    pow*=10;
  }
  return res;
}

int nb_bit1(int n) {
  res=0;
  int sizeoctet = 8*sizeof(n);
  int test =1 ;
  int i;
  for (i=0;i<sizeoctet;i++) {
    if (t&n)
      res+=1
    test*=2
  }
}



int main() {
int n=4;
printf("%d\n", sizeof(n));
}
