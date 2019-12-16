#include <stdio.h>

int main(void)
{
  int min, max, per;

  printf("何cmから：");
  scanf("%d", &min);
  printf("何cmまで：");
  scanf("%d", &max);
  printf("何cmごと：");
  scanf("%d", &per);

  while (min <= max)
  {
    printf("%dcm　%.2fkg\n", min, (min - 100) * 0.9);
    min += per;
  }

  return 0;
}
