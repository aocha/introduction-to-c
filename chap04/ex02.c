#include <stdio.h>

int main(void)
{
  int a, b, min, max, diff;
  int sum = 0;

  puts("二つの整数を入力してください：");
  printf("整数A：");
  scanf("%d", &a);
  printf("整数B：");
  scanf("%d", &b);

  if (a > b)
  {
    max = a;
    min = b;
  }
  else
  {
    max = b;
    min = a;
  }
  diff = max - min;

  do
  {
    sum = sum + (max - diff);
    diff = diff - 1;
  } while (diff >= 0);

  printf("%d以上%d以下の全整数の和は%dです\n", min, max, sum);

  return 0;
}
