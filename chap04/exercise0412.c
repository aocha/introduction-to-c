#include <stdio.h>

int main(void)
{
  int no;
  int digit = 0;

  do
  {
    printf("正の整数を入力してください：");
    scanf("%d", &no);
    if (no <= 0)
      puts("正ではない数を入力しないでください。");
  } while (no <= 0);

  printf("%dは", no);
  while (no > 0)
  {
    digit++;
    no /= 10;
  }
  printf("%d桁です。\n", digit);

  return 0;
}
