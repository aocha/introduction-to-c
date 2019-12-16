#include <stdio.h>

int main(void)
{
  int i, num;

  do
  {
    printf("正の整数を入力してください：");
    scanf("%d", &num);
    if (num <= 0)
      puts("1以上の整数を入力してください。");
  } while (num <= 0);

  for (i = 1; i <= num; i++)
  {
    printf("%d", i % 10);
  }
  putchar('\n');

  return 0;
}
