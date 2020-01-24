#include <stdio.h>

void put_stringn(const char s[], int n)
{
  while (n-- > 0)
  {
    printf("%s", s);
  }
}

int main(void)
{
  char s[128];
  int n;

  printf("文字列を入力：");
  scanf("%s", s);
  printf("何回繰り返して表示しますか：");
  scanf("%d", &n);

  put_stringn(s, n);
  putchar('\n');

  return 0;
}
