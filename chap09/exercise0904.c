#include <stdio.h>

void null_string(char s[])
{
  int i;
  while (s[i])
  {
    s[i++] = 0;
  }
}

int main(void)
{
  char s[128];

  printf("文字列：");
  scanf("%s", s);
  null_string(s);
  printf("s = \"%s\"\n", s);

  return 0;
}
