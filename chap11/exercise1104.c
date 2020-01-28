#include <stdio.h>

void put_string(const char *s)
{
  while (*s)
    printf("%c", *s++);
  putchar('\n');
}

int main(void)
{
  char str[128];

  printf("文字列を入力してください：");
  scanf("%s", str);
  put_string(str);

  return 0;
}
