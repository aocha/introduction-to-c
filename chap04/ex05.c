#include <stdio.h>

int main(void)
{
  int no;
  int i = 1;

  printf("正の整数を入力してください：");
  scanf("%d", &no);

  while (i <= no)
  {
    printf("%d ", i++);

    if (i > no)
      printf("\n");
  }

  return 0;
}
