#include <stdio.h>

int leap_year(int y)
{
  if (y % 400 == 0)
    return 1;

  if (y % 100 == 0)
    return 0;

  return (y % 4 == 0) ? 1 : 0;
}

int days_in_month(int y, int m)
{
  int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  return (m == 2 && leap_year(y)) ? 29 : days[m - 1];
}

void decrement_date(int *y, int *m, int *d)
{
  *d -= 1;

  if (*d <= 0)
  {
    *m -= 1;

    if (*m <= 0)
    {
      *y -= 1;
      *m = 12;
    }

    *d = days_in_month(*y, *m);
  }
}

void increment_date(int *y, int *m, int *d)
{
  *d += 1;

  if (*d > days_in_month(*y, *m))
  {
    *m += 1;
    *d = 1;
  }

  if (*m > 12)
  {
    *y += 1;
    *m = 1;
  }
}

int main(void)
{
  int year, month, day;

  puts("生年月日を入力してください。");
  printf("年：");
  scanf("%d", &year);
  printf("月：");
  scanf("%d", &month);
  printf("日：");
  scanf("%d", &day);

  decrement_date(&year, &month, &day);
  printf("入力された日の前の日は西暦%d年%d月%d日です。\n", year, month, day);

  increment_date(&year, &month, &day);
  increment_date(&year, &month, &day);
  printf("入力された日の次の日は西暦%d年%d月%d日です。\n", year, month, day);

  return 0;
}
