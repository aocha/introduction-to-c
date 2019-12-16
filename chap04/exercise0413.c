#include <stdio.h>

int main(void)
{
  int n, i;
  int sum = 0;

  do
  {
    printf("nの値：");
    scanf("%d", &n);
    if (n <= 0)
      puts("1以上の整数を入力してください。");
  } while (n <= 0);

  for (i = 1; i <= n; i++)
  {
    sum += i;
  }
  printf("1から%dまでの和は%dです。\n", n, sum);

  return 0;
}
