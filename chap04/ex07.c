#include <stdio.h>

int main(void)
{
  int no;
  int i = 2;

  printf("正の整数を入力してください：");
  scanf("%d", &no);

  while (i <= no)
  {
    printf("%d ", i);
    i *= 2;

    if (i > no)
      printf("\n");
  }

  return 0;
}
