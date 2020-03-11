#include <stdio.h>

int main(void)
{
  int a, b;

  puts("二つの整数を入力してください。");
  printf("整数A：");
  scanf("%d", &a);
  printf("整数B：");
  scanf("%d", &b);

  printf("式a == bを評価したときの値は%dです。\n", a == b);
  printf("式a != bを評価したときの値は%dです。\n", a != b);
  printf("式a > bを評価したときの値は%dです。\n", a > b);
  printf("式a < bを評価したときの値は%dです。\n", a < b);
  printf("式a >= bを評価したときの値は%dです。\n", a >= b);
  printf("式a <= bを評価したときの値は%dです。\n", a <= b);

  return 0;
}
