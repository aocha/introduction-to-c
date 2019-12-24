#include <stdio.h>

#define NUMBER 80

int main(void)
{
  int i, j;
  int num;
  int tensu[NUMBER];
  int bunpu[11] = {0};

  printf("人数を入力してください：");
  do
  {
    scanf("%d", &num);
    if (num < 1 || num > NUMBER)
      printf("\a1~%dで入力してください：", NUMBER);
  } while (num < 1 || num > NUMBER);

  printf("%d人の点数を入力してください。\n", num);
  for (i = 0; i < num; i++)
  {
    printf("%d番：", i + 1);
    do
    {
      scanf("%d", &tensu[i]);
      if (tensu[i] < 0 || tensu[i] > 100)
        printf("\a0~100で入力してください：");
    } while (tensu[i] < 0 || tensu[i] > 100);
    bunpu[tensu[i] / 10]++;
  }

  for (i = num; i > 0; i--)
  {
    for (j = 0; j <= 10; j++)
    {
      if (bunpu[j] == num)
      {
        printf("  *");
        bunpu[j]--;
      } else {
        printf("   ");
      }
    }
    num--;
    putchar('\n');
  }

  puts("-----------------------------------");
  for (i = 0; i <= 9; i++)
    printf("%3d", i * 10);
  printf(" 100\n");

  return 0;
}
