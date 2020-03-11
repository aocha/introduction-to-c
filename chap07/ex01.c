#include <stdio.h>

int main(void)
{
  int n;

  puts("int型のbyte数");
  printf("sizeof 1 = %u\n\n", (unsigned)sizeof 1);

  puts("int型のbyte数");
  printf("sizeof+1 = %u\n\n", (unsigned)sizeof + 1);

  puts("int型のbyte数");
  printf("sizeof-1 = %u\n\n", (unsigned)sizeof - 1);

  puts("int型のbyte数から1を引いた値");
  printf("sizeof(unsigned)-1 = %u\n\n", (unsigned)sizeof(unsigned) - 1);

  puts("double型のbyte数から1を引いた値");
  printf("sizeof(double)-1 = %u\n\n", (unsigned)sizeof(double) - 1);

  puts("int型からcastされたdouble型のbyte数");
  printf("sizeof((double)-1) = %u\n\n", (unsigned)sizeof((double)-1));

  puts("int型のbyte数に2を足した値");
  printf("sizeof n+2 = %u\n\n", (unsigned)sizeof n + 2);

  puts("int型のbyte数");
  printf("sizeof(n+2) = %u\n\n", (unsigned)sizeof(n + 2));

  puts("int型+double型=double型のbyte数");
  printf("sizeof(n+2.0) = %u\n", (unsigned)sizeof(n + 2.0));

  return 0;
}
