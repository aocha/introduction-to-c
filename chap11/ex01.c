#include <stdio.h>

int main(void)
{
  char *p = "123";
  printf("p = \"%s\"\n", p);
  // pに+1するとpはp[1]のアドレスを指すようになるのでp="56"となる
  p = "456" + 1;
  printf("p = \"%s\"\n", p);

  return 0;
}
