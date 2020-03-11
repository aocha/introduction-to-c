#include <stdio.h>

#define ARY_NUM 10

int main(void)
{
  FILE *fp;
  int i;
  double sd[ARY_NUM] = {3.14159265358979323846, 0.0, 0.0, 0.0, 0.0,
                        0.0, 0.0, 0.0, 0.0, 321432543254.2413};
  double dd[ARY_NUM] = {0.0};

  for (i = 0; i < ARY_NUM; i++)
    printf("%23.21f\n", sd[i]);

  if ((fp = fopen("1311.bin", "wb")) != NULL)
  {
    fwrite(sd, sizeof(double), ARY_NUM, fp);
    fclose(fp);
  }

  printf("\nバイナリに書き込んだものを読み出します。\n\n");

  if ((fp = fopen("1311.bin", "rb")) != NULL)
  {
    fread(dd, sizeof(double), ARY_NUM, fp);
    fclose(fp);
  }

  for (i = 0; i < ARY_NUM; i++)
    printf("%23.21f\n", dd[i]);

  return 0;
}
