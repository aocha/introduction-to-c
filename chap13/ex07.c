#include <stdio.h>

int main(void)
{
  int ch;
  FILE *fp;
  char fname[FILENAME_MAX];
  int cnt = 0;

  printf("ファイル名：");
  scanf("%s", fname);

  if ((fp = fopen(fname, "r")) == NULL)
  {
    puts("ファイルをオープンできません。\n");
  }
  else
  {
    while ((ch = fgetc(fp)) != EOF)
    {
      cnt++;
    }
    fclose(fp);
  }

  printf("%sの文字数：%d\n", fname, cnt);

  return 0;
}
