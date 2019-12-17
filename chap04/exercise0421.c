#include <stdio.h>

int main(void)
{
  int i, j, height;

  puts("正方形を作ります。");
  printf("何段ですか：");
  scanf("%d", &height);

  for (i = 0; i < height; i++)
  {
    for (j = 0; j < height; j++)
    {
      putchar('*');
    }

    putchar('\n');
  }

  return 0;
}