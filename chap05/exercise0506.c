// b = 1.5が評価されるとint型に1.5を入れて戻り値は1となる
// a = bが評価されるとdouble型に1を入れて戻り値は1.000000...となる

#include <stdio.h>

int main(void)
{
  double a;
  int b;

  a = b = 1.5;

  printf("a = %.2f\n", a);
  printf("b = %d\n", b);

  return 0;
}
