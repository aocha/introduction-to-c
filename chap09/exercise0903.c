#include <stdio.h>
#include <string.h>

#define NUMBER 100

int main(void)
{
  int i;
  char s[NUMBER][128];

  for (i = 0; i < NUMBER; i++)
  {
    printf("s[%d]: ", i);
    scanf("%s", s[i]);

    if (strcmp(s[i], "$$$$$") == 0)
    {
      break;
    }
  }

  for (i = 0; i < NUMBER; i++)
  {
    if (strcmp(s[i], "$$$$$") == 0)
    {
      break;
    }

    printf("s[%d] = \"%s\"\n", i, s[i]);
  }

  return 0;
}
