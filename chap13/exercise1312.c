#include <stdio.h>
#include <time.h>

#define TIME_ITEM 6

void rb_time(void)
{
  FILE *fp;
  int dt[TIME_ITEM] = {};

  if ((fp = fopen("1312.bin", "rb")) == NULL)
  {
    puts("ファイルがオープンできません。");
  }
  else
  {
    fread(dt, sizeof(int), TIME_ITEM, fp);
    printf("前回の日時は%d年%d月%d日 %d時%d分%d秒\n", dt[0], dt[1], dt[2], dt[3], dt[4], dt[5]);
    fclose(fp);
  }
}

void wb_time()
{
  FILE *fp;
  time_t current = time(NULL);
  struct tm *timer = localtime(&current);
  int st[6] = {timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
               timer->tm_hour, timer->tm_min, timer->tm_sec};

  if ((fp = fopen("1312.bin", "wb")) == NULL)
  {
    puts("ファイルがオープンできません。");
  }
  else
  {
    printf("現在の日時は%d年%d月%d日 %d時%d分%d秒\n", st[0], st[1], st[2], st[3], st[4], st[5]);
    fwrite(st, sizeof(int), TIME_ITEM, fp);
    fclose(fp);
  }
}

int main(void)
{
  rb_time();
  wb_time();
  return 0;
}
