#include <stdio.h>

void put_stringr(const char s[])
{
  int i = 0, len = 0;

  while (s[i++])
    len += 1;

  while (len-- > 0)
    putchar(s[len]);
}

int main(void)
{
  char s[128];

  printf("文字列を入力してください：");
  scanf("%s", s);

  put_stringr(s);
  putchar('\n');

  return 0;
}
