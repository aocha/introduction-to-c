#include <stdio.h>

#define NUMBER 20

int main(void)
{

  int num, i;
  int v[NUMBER];

  do
  {
    printf("データ数：");
    scanf("%d", &num);
    if (num <= 0 || 20 < num)
      printf("データ数は1から%d以下で入力してください。\n", NUMBER);
  } while (num <= 0 || 20 < num);

  for (i = 0; i < num; i++)
  {
    printf("%d番：", i + 1);
    scanf("%d", &v[i]);
  }

  putchar('{');
  for (i = 0; i < num; i++)
  {
    printf("%d", v[i]);
    if (i < num - 1)
      printf(", ");
  }
  printf("}\n");

  return 0;
}
