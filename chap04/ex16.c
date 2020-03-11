#include <stdio.h>

int main(void)
{
  int num, i;

  printf("整数値：");
  scanf("%d", &num);

  for (i = 1; i <= num; i++)
  {
    if (i % 2 != 0)
      printf("%d ", i);
    if (i == num)
      putchar('\n');
  }

  return 0;
}
