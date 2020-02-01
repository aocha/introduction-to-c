#include <stdio.h>

int main(void)
{
  int ch;
  FILE *sfp, *dfp;
  char sfname[FILENAME_MAX], dfname[FILENAME_MAX];

  printf("コピー元のファイル名：");
  scanf("%s", sfname);
  printf("コピー先のファイル名：");
  scanf("%s", dfname);

  if ((sfp = fopen(sfname, "r")) == NULL)
  {
    puts("ファイルがオープンできません。");
  }
  else
  {
    if ((dfp = fopen(dfname, "w")) == NULL)
    {
      puts("コピー先のファイルがオープンできません。");
    }
    else
    {
      while ((ch = fgetc(sfp)) != EOF)
      {
        putchar(ch);
        fputc(ch, dfp);
      }
      printf("%sを%sへコピーしました。\n", sfname, dfname);
      fclose(dfp);
    }
    fclose(sfp);
  }

  return 0;
}
