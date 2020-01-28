#include <stdio.h>
#include <string.h>
#include <ctype.h>

void del_digit(char *str)
{
  int i, j;
  for (i = 0; i < strlen(str); i++)
  {
    if (isdigit(*(str + i)))
    {
      for (j = i; j < strlen(str); j++)
      {
        *(str + j) = *(str + j + 1);
      }
      i--;
    }
  }
}

int main(void)
{
  char str[128];

  printf("文字列：");
  scanf("%s", str);

  del_digit(str);
  printf("%s\n", str);

  return 0;
}
