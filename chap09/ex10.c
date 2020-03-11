// input: AB12C9
// output: ABC

#include <stdio.h>
#include <ctype.h>

void del_digit(char s[])
{
  int i = 0;
  while (s[i])
  {
    if (isdigit(s[i]))
      s[i] = "\0";
    i++;
  }
}

int main(void)
{
  char s[128];

  printf("文字列を入力：");
  scanf("%s", s);

  del_digit(s);
  printf("%s\n", s);

  return 0;
}
