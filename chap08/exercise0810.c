#include <stdio.h>

int main(void)
{
  int i, j, ch;
  int cnt[10] = {0};
  int sum = 0;

  while ((ch = getchar()) != EOF)
  {
    if (ch >= '0' && ch <= '9')
    {
      cnt[ch - '0']++;
    }
  }

  for (i = 0; i < 10; i++)
  {
    sum += cnt[i];
  }

  for (i = sum; i > 0; i--)
  {
    for (j = 0; j < 10; j++)
    {
      if (cnt[j] == sum)
      {
        printf("  *");
        cnt[j]--;
      }
      else
      {
        printf("   ");
      }
    }
    sum--;
    putchar('\n');
  }

  puts("------------------------------");
  for (i = 0; i <= 9; i++)
  {
    printf("%3d", i);
  }
  putchar('\n');

  return 0;
}
