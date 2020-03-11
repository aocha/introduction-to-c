#include <stdio.h>

int main(void)
{
  unsigned x = 0xffffffff;

  printf("%u + 0 = %u\n", x, x + 0U);
  printf("%u + 1 = %u\n", x, x + 1U);

  return 0;
}
