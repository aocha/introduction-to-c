#include <stdio.h>

int main(void)
{
  int ch;
  int cnt = 0;

  while ((ch = getchar()) != EOF)
  {
    if (ch == '\n')
    {
      cnt++;
    }
  }

  printf("入力された行数は%d行です。\n", cnt);

  return 0;
}
