#include <stdio.h>

int combination(int n, int r)
{
  if (r <= 0 || n == r)
  {
    return 1;
  }
  else if (r == 1)
  {
    return n;
  }
  else
  {
    return combination(n - 1, r - 1) + combination(n - 1, r);
  }
}

int main(void)
{
  int n1, n2;
  printf("要素数：");
  scanf("%d", &n1);
  printf("取り出す数：");
  scanf("%d", &n2);

  printf("%dから%d個取り出したときの組み合わせ数は%dです。\n", n1, n2, combination(n1, n2));

  return 0;
}
