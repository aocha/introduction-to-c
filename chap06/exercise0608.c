#include <stdio.h>

#define ARRAY_SIZE 3

int min_of(const int v[], int n)
{
  int i;
  int min = v[0];

  for (i = 1; i < n; i++)
    if (min > v[i])
      min = v[i];

  return min;
}

int main(void)
{
  int i;
  int ary[ARRAY_SIZE];

  for (i = 0; i < ARRAY_SIZE; i++)
  {
    printf("値%d：", i + 1);
    scanf("%d", &ary[i]);
  }

  printf("入力された値の中で一番小さな値は%dです。\n", min_of(ary, ARRAY_SIZE));

  return 0;
}
