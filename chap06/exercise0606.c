#include <stdio.h>

void alert(int n)
{
  while (n-- > 0)
  {
    putchar('\a');
  }
}

int main(void)
{
  int n;

  printf("警告音を何回鳴らしますか？：");
  scanf("%d", &n);

  alert(n);

  return 0;
}
