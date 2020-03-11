#include <stdio.h>

int main(void)
{
  int num, i;

  printf("何個*を表示しますか：");
  scanf("%d", &num);

  for (i = 1; i <= num; i++)
  {
    putchar('*');
    if (i % 5 == 0 || i == num)
      putchar('\n');
  }

  return 0;
}
