#include <stdio.h>

#define NAME_LEN 64

struct student
{
  char name[NAME_LEN];
  int height;
  float weight;
  long schols;
};

int main(void)
{
  struct student takao = {"Takao", 173, 68.2};

  printf("name  : %10s (%p)\n", takao.name, &takao.name);
  printf("height: %10d (%p)\n", takao.height, &takao.height);
  printf("weight: %10f (%p)\n", takao.weight, &takao.weight);
  printf("schols: %10ld (%p)\n", takao.schols, &takao.schols);

  return 0;
}
