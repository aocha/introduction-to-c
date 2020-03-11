#include <stdio.h>

void put_count()
{
  static int count;
  printf("put_count：%d回目\n", ++count);
}

int main(void)
{
  int i, num;

  printf("put_countを何回呼び出しますか？：");
  scanf("%d", &num);

  for (i = 0; i < num; i++)
    put_count();

  return 0;
}
