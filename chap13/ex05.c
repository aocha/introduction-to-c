#include <stdio.h>
#include <time.h>

char data_file[] = "datetime.dat";

void get_data(void)
{
  FILE *fp;
  if ((fp = fopen(data_file, "r")) == NULL)
  {
    puts("本プログラムを実行するのは初めてですね。");
  }
  else
  {
    int year, month, day, h, m, s;
    char feeling[64];
    fscanf(fp, "%d %d %d %d %d %d %s", &year, &month, &day, &h, &m, &s, feeling);
    printf("前回は%d年%d月%d日%d時%d分%d秒で、気分は%sでした。\n", year, month, day, h, m, s, feeling);
    fclose(fp);
  }
}

void put_data(void)
{
  FILE *fp;
  time_t current = time(NULL);
  struct tm *timer = localtime(&current);
  char feeling[64];
  if ((fp = fopen(data_file, "w")) == NULL)
  {
    puts("ファイルをオープンできません。");
  }
  else
  {
    printf("現在の気分は：");
    scanf("%s", feeling);
    fprintf(fp, "%d %d %d %d %d %d %s\n",
            timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
            timer->tm_hour, timer->tm_min, timer->tm_sec,
            feeling);
    fclose(fp);
  }
}

int main(void)
{
  get_data();
  put_data();
  return 0;
}
