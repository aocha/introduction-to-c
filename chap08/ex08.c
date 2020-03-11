#include <stdio.h>

// 制約: x >= y
int gcd(int x, int y)
{
  int rem;

  rem = x % y;

  if (rem == 0)
  {
    return y;
  }
  else
  {
    return gcd(y, rem);
  }
}

int main(void)
{
  int x, y;

  printf("辺1：");
  scanf("%d", &x);
  printf("辺2：");
  scanf("%d", &y);

  if (x < y)
  {
    int temp = x;
    x = y;
    y = temp;
  }

  printf("%dと%dの最大公約数は%dです。\n", x, y, gcd(x, y));

  return 0;
}
