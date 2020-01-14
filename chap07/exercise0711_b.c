#include <stdio.h>

int main(void)
{
  int i;
  double sum = 0.0;

  for (i = 0; i <= 100; i++)
  {
    sum += i / 100.0;
  }

  printf("%f\n", sum);

  return 0;
}
