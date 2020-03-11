#include <stdio.h>

int main(void)
{
  int x, y, z;

  puts("三つの整数を入力してください。");

  printf("整数１：");
  scanf("%d", &x);
  printf("整数２：");
  scanf("%d", &y);
  printf("整数３：");
  scanf("%d", &z);

  printf("それらの和は%dです。\n", x + y + z);

  return 0;
}
