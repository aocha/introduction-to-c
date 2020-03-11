#include <stdio.h>

int main(void)
{
  int i, n;

  printf("整数値：");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
    if (n % i == 0)
      printf("%d\n", i);
  if (n >= 0)
    printf("約数は%d個です。\n", n);

  return 0;
}