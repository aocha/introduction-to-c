#include <stdio.h>

int main(void)
{
  int i = 0;
  int no;

  printf("正の整数：");
  scanf("%d", &no);

  while (i < no)
  {
    if (i % 2)
    {
      putchar('-');
    }
    else
    {
      putchar('+');
    }

    i++;

    if (i >= no)
    {
      putchar('\n');
    }
  }

  return 0;
}
