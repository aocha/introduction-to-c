#include <stdio.h>

int main(void)
{
  int a, b, diff;

  puts("二つの整数を入力してください。");
  printf("整数A：");
  scanf("%d", &a);
  printf("整数B：");
  scanf("%d", &b);

  diff = a - b;

  if (diff >= -10 || 10 <= diff)
    puts("それらの差は10以下です。");
  else
    puts("それらの差は11以上です。");

  return 0;
}
