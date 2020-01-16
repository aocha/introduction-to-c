#include <stdio.h>

#define diff(x, y) (x - y)

int main(void)
{
  int x, y;

  printf("半角スペース区切りでxとyの整数を入力してください：");
  scanf("%d %d", &x, &y);

  printf("%d - %d = %d\n", x, y, diff(x, y));

  return 0;
}
