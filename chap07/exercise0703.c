#include <stdio.h>

int count_bits()
{
  return 8 * sizeof(unsigned);
}

void print_bits(unsigned x)
{
  int i;

  for (i = count_bits() - 1; i >= 0; i--)
  {
    putchar((x >> i) & 1U ? '1' : '0');

    if (i % 8 == 0)
      putchar(' ');
  }

  putchar('\n');
}

unsigned rrotate(unsigned x, int n)
{
  return x >> n | x << (count_bits() - n);
}

unsigned lrotate(unsigned x, int n)
{
  return x << n | x >> (count_bits() - n);
}

int main(void)
{
  unsigned x, n;

  printf("非負の整数：");
  scanf("%u", &x);
  printf("シフトするビット数：");
  scanf("%u", &n);

  printf("非負の整数%uのビット列\n", x);
  print_bits(x);
  printf("右に%uビット回転させたビット列\n", n);
  print_bits(rrotate(x, n));
  printf("左に%uビット回転させたビット列\n", n);
  print_bits(lrotate(x, n));

  return 0;
}
