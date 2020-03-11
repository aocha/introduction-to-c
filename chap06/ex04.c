#include <stdio.h>

int sqr(int x)
{
  return x * x;
}

int pow4(int x)
{
  return sqr(x) * sqr(x);
}

int main(void)
{
  int x;

  printf("整数x：");
  scanf("%d", &x);

  printf("整数xの4乗は%dです。\n", pow4(x));

  return 0;
}
