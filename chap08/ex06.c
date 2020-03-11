#include <stdio.h>

// 再帰を使わないケース
int factorial(int n)
{
  int i;
  int sum = 1;

  for (i = 1; i <= n; i++)
  {
    sum *= i;
  }

  return sum;
}

int main(void)
{
  int num;
  printf("整数を入力してください：");
  scanf("%d", &num);

  printf("%d! = %d\n", num, factorial(num));

  return 0;
}
