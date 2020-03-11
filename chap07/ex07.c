#include <stdio.h>

int main(void)
{
  float x;
  double y;
  long double z;

  printf("float x =：");
  scanf("%f", &x);
  printf("double y =：");
  scanf("%lf", &y);
  printf("long double z =：");
  scanf("%Lf", &z);

  printf("%f\n", x);
  printf("%f\n", y);
  printf("%Lf\n", z);

  return 0;
}
