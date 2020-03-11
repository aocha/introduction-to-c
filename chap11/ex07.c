#include <stdio.h>
#include <ctype.h>

void str_toupper(char s[])
{
  do
  {
    *s = toupper(*s);
  } while (*s++);
}

void str_tolower(char s[])
{
  do
  {
    *s = tolower(*s);
  } while (*s++);
}

int main(void)
{
  char str[128];

  printf("文字列：");
  scanf("%s", str);

  str_toupper(str);
  printf("大文字：%s\n", str);

  str_tolower(str);
  printf("小文字：%s\n", str);

  return 0;
}
