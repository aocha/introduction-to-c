#include <stdio.h>

int main(void)
{
  int x, y;

  puts("二つの整数を入力してください。");

  printf("整数１：");
  scanf("%d", &x);
  printf("整数２：");
  scanf("%d", &y);

  printf("それらの積は%dです。\n", x * y);

  return 0;
}
