#include <stdio.h>

int main(void)
{
  FILE *fp;
  char name[64];
  double height, weight;
  int retry = 0;

  if ((fp = fopen("hw.dat", "w")) == NULL)
  {
    puts("ファイルをオープンできません。");
  }
  else
  {
    while (retry == 0)
    {
      printf("名前 身長 体重：");
      scanf("%s %lf %lf", name, &height, &weight);
      fprintf(fp, "%s %.1f %.2f\n", name, height, weight);
      printf("Retry?<Yes...0/No...1>: ");
      scanf("%d", &retry);
    }
    fclose(fp);
  }

  return 0;
}
