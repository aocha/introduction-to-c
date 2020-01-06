#include <stdio.h>

#define ITEM_COUNT 3

void rev_intary(int v[], int n)
{
  int i;

  for (i = 0; i < n / 2; i++)
  {
    int rev_index = (n - 1) - i;
    int tmp = v[i];

    v[i] = v[rev_index];
    v[rev_index] = tmp;
  }
}

int main(void)
{
  int i;

  int ary[ITEM_COUNT] = {0};

  puts("値を入力してください。");
  for (i = 0; i < ITEM_COUNT; i++)
  {
    printf("要素%d：", i + 1);
    scanf("%d", &ary[i]);
  }

  rev_intary(ary, ITEM_COUNT);

  printf("{ ");
  for (i = 0; i < ITEM_COUNT; i++)
  {
    printf("%d ", ary[i]);
  }
  printf("}\n");

  return 0;
}
