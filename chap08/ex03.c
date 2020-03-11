#include <stdio.h>

#define swap(type, a, b) \
  type tmp = a;          \
  a = b;                 \
  b = tmp;

int main(void)
{
  int x, y;

  printf("整数x：");
  scanf("%d", &x);
  printf("整数y：");
  scanf("%d", &y);

  swap(int, x, y);
  printf("swap後のx = %d, y = %d\n", x, y);

  return 0;
}
