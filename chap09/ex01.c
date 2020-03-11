#include <stdio.h>

int main(void)
{
  // \0が文字列の終端文字を表すのでABCだけ表示される
  char str[] = "ABC\0DEF";
  printf("文字列strは\"%s\"です。\n", str);
  return 0;
}
