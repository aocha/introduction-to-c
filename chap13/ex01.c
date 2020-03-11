#include <stdio.h>

int main(void)
{
  FILE *fp;
  char filename[64];

  printf("開くファイル名：");
  scanf("%s", filename);

  fp = fopen(filename, "r");
  if (fp == NULL)
  {
    printf("ファイル\"%s\"をオープンできませんでした。\n", filename);
  }
  else
  {
    printf("ファイル\"%s\"をオープンしました。\n", filename);
    fclose(fp);
  }

  return 0;
}
