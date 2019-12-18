#include <stdio.h>

int main(void)
{
  int i, j, len;

  puts("左上直角二等辺三角形を作ります。");
  printf("短辺：");
  scanf("%d", &len);

  for (i = 0; i < len; i++)
  {
    for (j = 0; j < (len - i); j++)
    {
      putchar('*');
    }
    putchar('\n');
  }

  return 0;
}
