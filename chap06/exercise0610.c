#include <stdio.h>

#define ITEM_COUNT 5

void intary_rcpy(int v1[], const int v2[], int n)
{
  int i;

  for (i = 0; i < n; i++)
  {
    v1[(n - 1) - i] = v2[i];
  }
}

void print_ary(const int v[], int n)
{
  int i;

  printf("{ ");
  for (i = 0; i < n; i++)
  {
    printf("%d ", v[i]);
  }
  puts("}");
}

int main(void)
{
  int v1[ITEM_COUNT] = {};
  int v2[ITEM_COUNT] = {1, 2, 3, 4, 5};

  printf("v2：");
  print_ary(v2, ITEM_COUNT);
  printf("v1：");
  print_ary(v1, ITEM_COUNT);
  puts("v2を反転してv1へコピーします。");

  intary_rcpy(v1, v2, ITEM_COUNT);
  printf("v1：");
  print_ary(v1, ITEM_COUNT);

  return 0;
}
