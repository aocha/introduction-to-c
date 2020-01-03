#include <stdio.h>

int main(void)
{
  int i, j, k;
  int matrix1[4][3]; // = {{0, 2, 1}, {-1, 1, 2}, {0, 0, 0}, {2, -2, 1}};
  int matrix2[3][4]; // = {{1, 2, 0, 1}, {2, 1, 0, -2}, {0, -1, 0, 2}};
  int matrix3[4][4]; // = {{4, 1, 0, -2}, {1, -3, 0, 1}, {0, 0, 0, 0}, {-2, 1, 0, 8}};

  puts("4行3列の行列を作ります。数字を半角スペース区切りで入力してください。");
  for (i = 0; i < 4; i++)
  {
    printf("%d行目：", i + 1);
    scanf("%d %d %d", &matrix1[i][0], &matrix1[i][1], &matrix1[i][2]);
  }

  puts("3行4列の行列を作ります。数字を半角スペース区切りで入力してください。");
  for (i = 0; i < 3; i++)
  {
    printf("%d行目：", i + 1);
    scanf("%d %d %d %d", &matrix2[i][0], &matrix2[i][1], &matrix2[i][2], &matrix2[i][3]);
  }

  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      int sum = 0;

      for (k = 0; k < 3; k++)
      {
        sum += matrix1[i][k] * matrix2[k][j];
      }

      matrix3[i][j] = sum;
    }
  }

  puts("入力された行列の積は、");
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf("%3d", matrix3[i][j]);
    }
    putchar('\n');
  }

  return 0;
}
