#include <stdio.h>
#include <math.h>

int main(void)
{
  double area;

  printf("正方形の面積を入力してください：");
  scanf("%lf", &area);

  printf("正方形%.2f平方cmの1辺は%.2fcmです。\n", area, sqrt(area));

  return 0;
}
