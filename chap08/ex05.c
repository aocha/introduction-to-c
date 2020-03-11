#include <stdio.h>

enum season
{
  Spring,
  Summer,
  Fall,
  Winter
};

int main(void)
{
  enum season selected;

  printf("0…春　1…夏　2…秋　3…冬：");
  scanf("%d", &selected);

  switch (selected)
  {
  case Spring:
    puts("桜舞い散る。");
    break;

  case Summer:
    puts("暑い。");
    break;

  case Fall:
    puts("食欲の秋だね。");
    break;

  case Winter:
    puts("寒い。");
    break;

  default:
    puts("そんな季節はありません。");
    break;
  }

  return 0;
}
