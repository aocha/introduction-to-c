#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
{
  int i, j, k, sum;

  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      sum = 0;

      for (k = 0; k < 3; k++)
      {
        sum += a[i][k] * b[k][j];
      }

      c[i][j] = sum;
    }
  }
}

int main(void)
{
  int i, j;
  int a[4][3] = {{1, 1, 1}, {0, 0, 0}, {2, 2, 2}, {1, 1, 1}};
  int b[3][4] = {{1, 0, 2, 1}, {1, 0, 2, 1}, {1, 0, 2, 1}};
  int c[4][4];

  mat_mul(a, b, c);

  puts("----- 行列a -----");
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%3d", a[i][j]);
    }
    putchar('\n');
  }

  puts("----- 行列b -----");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf("%3d", b[i][j]);
    }
    putchar('\n');
  }

  puts("----- 行列aと行列bの積 -----");
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf("%3d", c[i][j]);
    }
    putchar('\n');
  }

  return 0;
}
