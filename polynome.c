#include "stdio.h"
double polynome(double x) {
  double res = x*2;
  return res;
}

int main() {
  double valeur_test=4;
  valeur_test=polynome(valeur_test);
  printf("Résultat : %lf\n",valeur_test);
  return 0;
}
