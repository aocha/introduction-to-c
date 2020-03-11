#include <stdio.h>
#include <string.h>

#define ARY_LEN 100
#define STR_LEN 128

void get_strary(char s[][STR_LEN], int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    printf("s[%d]: ", i);
    scanf("%s", s[i]);

    if (strcmp(s[i], "$$$$$") == 0)
      break;
  }
}

void put_strary(const char s[][STR_LEN], int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    if (strcmp(s[i], "$$$$$") == 0)
      break;

    printf("s[%d] = \"%s\"\n", i, s[i]);
  }
}

int main(void)
{
  char cs[ARY_LEN][STR_LEN];

  get_strary(cs, ARY_LEN);
  put_strary(cs, ARY_LEN);

  return 0;
}
