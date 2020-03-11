#include <stdio.h>

#define UBITS 8 * sizeof(unsigned)

unsigned set(unsigned x, int n)
{
  return x | 1U << (n - 1);
}

unsigned reset(unsigned x, int n)
{
  return x & ~(1U << (n - 1));
}

unsigned inverse(unsigned x, int n)
{
  return x ^ 1U << (n - 1);
}

void print_bits(unsigned x)
{
  int i;

  for (i = UBITS - 1; i >= 0; i--)
  {
    putchar((x >> i) & 1U ? '1' : '0');
    if (i % 8 == 0)
    {
      putchar(' ');
    }
  }

  putchar('\n');
}

int main(void)
{
  unsigned x, n;

  printf("非負の整数：");
  scanf("%u", &x);
  print_bits(x);

  printf("第何ビットに1をセットしますか：");
  scanf("%u", &n);
  print_bits(set(x, n));

  printf("第何ビットに0をセットしますか：");
  scanf("%u", &n);
  print_bits(reset(x, n));

  printf("第何ビットを反転させますか：");
  scanf("%u", &n);
  print_bits(inverse(x, n));

  return 0;
}
