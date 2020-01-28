#include <stdio.h>

int str_chnum(const char *s, int c)
{
  int n = 0;

  while (*s)
  {
    if (*s++ == c)
      n++;
  }

  return n;
}

int main(void)
{
  char str[128], ch;

  printf("文字列を入力：");
  scanf("%s", str);
  printf("カウントする1文字を入力：");
  getchar();
  scanf("%c", &ch);

  printf("%sに%cは%d個含まれています。\n", str, ch, str_chnum(str, ch));

  return 0;
}
