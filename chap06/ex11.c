#include <stdio.h>

#define NUMBER 7

int search_idx(const int v[], int idx[], int key, int n)
{
  int i;
  int idx_count = 0;

  for (i = 0; i < n; i++)
  {
    if (v[i] == key)
    {
      idx[idx_count] = i;
      idx_count++;
    }
  }

  return idx_count;
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
  int v[NUMBER] = {1, 7, 5, 7, 2, 4, 7};
  int idx[] = {};
  int key, idx_count;

  printf("配列：");
  print_ary(v, NUMBER);
  printf("から、どの値の添字を探索しますか？：");
  scanf("%d", &key);

  idx_count = search_idx(v, idx, key, NUMBER);

  printf("値%dは%d個見つかりました。\n", key, idx_count);
  printf("%dの添字は", key);
  print_ary(idx, idx_count);

  return 0;
}
