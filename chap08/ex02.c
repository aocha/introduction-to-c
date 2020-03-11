#include <stdio.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))

int main(void)
{
  int a = 2, b = 1, c = 4, d = 3;

  // ((2 > 1) ? 2 : 1) > ((4 > 3) ? 4 : 3) ? 2 : 4
  // => 4
  printf("%d\n", max(max(a, b), max(c, d)));

  // ((((2 > 1) ? 2 : 1) > 4) ? 2 : 4) > 3 ? 4 : 3
  // => 4
  printf("%d\n", max(max(max(a, b), c), d));

  return 0;
}
