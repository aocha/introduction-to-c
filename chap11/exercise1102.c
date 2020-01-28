#include <stdio.h>

int main(void)
{
  int i;
  char a[][5] = {"LISP", "C", "Ada"};
  char *p[] = {"PAUL", "X", "MAC"};
  int an = sizeof(a) / sizeof(a[0]);
  int pn = sizeof(p) / sizeof(p[0]);

  for (i = 0; i < an; i++)
    printf("a[%d] = \"%s\"\n", i, a[i]);

  for (i = 0; i < pn; i++)
    printf("p[%d] = \"%s\"\n", i, p[i]);

  return 0;
}
