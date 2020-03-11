#include <stdio.h>

int main(void)
{
  int i, j, min, max, length1, length2;

  puts("横長の長方形を作ります。");
  printf("一辺（その１）：");
  scanf("%d", &length1);
  printf("一辺（その２）：");
  scanf("%d", &length2);

  if (length1 >= length2)
  {
    max = length1;
    min = length2;
  } else {
    max = length2;
    min = length1;
  }

  for (i = 0; i < min; i++)
  {
    for (j = 0; j < max; j++)
    {
      putchar('*');
    }
    putchar('\n');
  }

  return 0;
}