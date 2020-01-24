#include <stdio.h>

int str_chnum(const char s[], int c)
{
  int i, cnt = 0;

  while (s[i])
  {
    if (s[i] == c)
    {
      cnt++;
    }
    i++;
  }

  return cnt;
}

int main(void)
{
  char s[128], c;

  printf("文字列を入力：");
  scanf("%s", s);

  printf("文字列から探したい文字を入力：");
  scanf(" %c", &c);

  printf("%cは%sの中に%d個見つかりました。\n", c, s, str_chnum(s, c));

  return 0;
}
