#include <stdio.h>

void swap(int *px, int *py)
{
  int temp = *px;
  *px = *py;
  *py = temp;
}

// 昇順ソート
void sort3(int *n1, int *n2, int *n3)
{
  if (*n1 > *n2)
    swap(n1, n2);

  if (*n2 > *n3)
    swap(n2, n3);

  if (*n1 > *n2)
    swap(n1, n2);
}

int main(void)
{
  int i, n1, n2, n3;

  printf("n1: ");
  scanf("%d", &n1);
  printf("n2: ");
  scanf("%d", &n2);
  printf("n3: ");
  scanf("%d", &n3);

  sort3(&n1, &n2, &n3);

  printf("昇順ソートの結果: %d <= %d <= %d\n", n1, n2, n3);

  return 0;
}
