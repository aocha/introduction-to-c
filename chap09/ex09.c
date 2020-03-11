#include <stdio.h>

void rev_string(char s[])
{
  int i = 0,
      len = 0;

  while (s[i++])
    len += 1;

  for (i = 0; i < (len / 2); i++)
  {
    int idx = len - (i + 1);
    char c = s[i];
    s[i] = s[idx];
    s[idx] = c;
  }
}

int main(void)
{
  char s[128];
  int i = 0;

  printf("文字列を入力してください：");
  scanf("%s", s);

  rev_string(s);
  printf("%s\n", s);

  return 0;
}
