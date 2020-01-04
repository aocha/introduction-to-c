#include <stdio.h>

int sumup(int n)
{
  int sum = 0;

  do
  {
    sum += n;
  } while (n-- > 0);

  return sum;
}

int main(void)
{
  int n;

  do
  {
    printf("整数n：");
    scanf("%d", &n);
    if (n <= 0)
      puts("nは1以上で入力してください。");
  } while (n <= 0);

  printf("1から%dまでの全整数の和は%d\n", n, sumup(n));

  return 0;
}
