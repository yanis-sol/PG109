

void print_ascii() {
  int i=0;
  for (i=0; i<128; i++) {
    printf("%d, %hhi\n", i, i);
  }


}

int main()
 {
  print_ascii();
  return 0;
}
