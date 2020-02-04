#include <stdio.h>

#define BUF_SIZE 1024

int main(void)
{
  int ch;
  FILE *sfp;
  FILE *dfp;
  char sname[FILENAME_MAX];
  char dname[FILENAME_MAX];
  char buf[BUF_SIZE];

  printf("コピー元ファイル名：");
  scanf("%s", sname);
  printf("コピー先ファイル名：");
  scanf("%s", dname);

  if ((sfp = fopen(sname, "r")) == NULL)
  {
    puts("コピー元ファイルをオープンできません。");
  }
  else
  {
    if ((dfp = fopen(dname, "w")) == NULL)
    {
      puts("コピー先ファイルをオープンできません。");
    }
    else
    {
      while (fread(&ch, sizeof(int), 1, sfp) > 0)
      {
        fwrite(&ch, sizeof(int), 1, dfp);
      }
      fclose(dfp);
    }
    fclose(sfp);
  }

  return 0;
}
