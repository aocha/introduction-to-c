#include <stdio.h>

int main(void)
{
  int i;
  static double ary[5];

  for (i = 0; i < 5; i++)
  {
    printf("ary[%d] = %.1f\n", i, ary[i]);
  }

  return 0;
}
