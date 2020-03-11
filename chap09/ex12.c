#include <stdio.h>

void rev_strings(char s[][128], int n)
{
  int i, j, len;

  for (i = 0; i < n; i++)
  {
    j = 0;
    len = 0;

    while (s[i][j++])
      len += 1;

    for (j = 0; j < (len / 2); j++)
    {
      int temp = s[i][j];
      int idx = len - (j + 1);

      s[i][j] = s[i][idx];
      s[i][idx] = temp;
    }
  }
}

int main(void)
{
  char cs[][128] = {"SEC", "ABC"};
  int i;

  rev_strings(cs, 2);
  for (i = 0; i < 2; i++)
    printf("%s\n", cs[i]);

  return 0;
}
