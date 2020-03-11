#include <stdio.h>

int str_char(const char s[], int c)
{
  int i;

  while (s[i])
  {
    if (s[i] == c)
    {
      return i;
    }
    i++;
  }

  return -1;
}

int main(void)
{
  char s[128], c;
  int idx;

  printf("文字列を入力：");
  scanf("%s", s);

  printf("文字列から探したい文字を入力：");
  scanf(" %c", &c);

  idx = str_char(s, c);

  if (idx != -1)
  {
    printf("%cは%sの添字%dにあります。\n", c, s, idx);
  }
  else
  {
    printf("%cは%sの中にありません。\n", c, s);
  }

  return 0;
}
