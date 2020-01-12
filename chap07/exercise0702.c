#include <stdio.h>

int main(void)
{
  // 00000101 = 5
  // >> 1: 00000010 = 2
  // << 1: 00001010 = 10
  unsigned x = 5;

  printf("x / 2 = %u\n", x / 2);
  printf("x >> 1 = %u\n", x >> 1);

  printf("x * 2 = %u\n", x * 2);
  printf("x << 1 = %u\n", x << 1);

  return 0;
}
