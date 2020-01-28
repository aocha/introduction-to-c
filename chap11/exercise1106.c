#include <stdio.h>
#include <string.h>

char *str_chr(const char *s, int c)
{
  char *p = NULL;

  while (*s)
  {
    if (*s == c)
    {
      p = s;
      break;
    }
    *s++;
  }

  return p;
}

int main(void)
{
  char str[128], ch;
  int i, len;

  printf("文字列：");
  scanf("%s", str);
  printf("カウントする1文字：");
  scanf(" %c", &ch);

  len = strlen(str);
  for (i = 0; i < len; i++)
    printf("str[%d] = %c(%p)\n", i, str[i], &str[i]);

  printf("文字列%sの最初の%c(%p)\n", str, ch, str_chr(str, ch));

  return 0;
}
