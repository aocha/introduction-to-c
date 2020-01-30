#include <stdio.h>

#define NAME_LEN 64

typedef struct
{
  char name[NAME_LEN];
  int height;
  double weight;
  long schols;
} Student;

void hiroko(Student *std)
{
  if (std->height < 180)
    std->height = 180;
  if (std->weight > 80)
    std->weight = 80;
}

int main(void)
{

  Student sanaka;

  printf("氏名：");
  scanf("%s", sanaka.name);
  printf("身長：");
  scanf("%d", &sanaka.height);
  printf("体重：");
  scanf("%lf", &sanaka.weight);
  printf("奨学金：");
  scanf("%ld", &sanaka.schols);

  hiroko(&sanaka);

  printf("氏　名 = %s\n", sanaka.name);
  printf("身　長 = %d\n", sanaka.height);
  printf("体　重 = %.1f\n", sanaka.weight);
  printf("奨学金 = %ld\n", sanaka.schols);

  return 0;
}
