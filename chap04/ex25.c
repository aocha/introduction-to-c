#include <stdio.h>

int main(void)
{
  int i, j, steps;

  puts("下向きのピラミッドを作ります。");
  printf("何段ですか：");
  scanf("%d", &steps);

  for (i = 1; i <= steps; i++)
  {
    for (j = 1; j <= steps - i; j++)
    {
      putchar(' ');
    }

    for (j = 1; j <= i * 2 - 1; j++)
    {
      printf("%d", i % 10);
    }
    putchar('\n');
  }

  return 0;
}
