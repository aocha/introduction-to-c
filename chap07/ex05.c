#include <stdio.h>

#define UBITS 8 * sizeof(unsigned)

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

unsigned mask_bits(int pos, int n)
{
  unsigned x = 0U;
  int i;

  for (i = pos + n - 1; i >= pos; i--)
  {
    x |= 1U << (i - 1);
  }

  return x;
}

unsigned set_n(unsigned x, int pos, int n)
{
  return x | mask_bits(pos, n);
}

unsigned reset_n(unsigned x, int pos, int n)
{
  return x & ~mask_bits(pos, n);
}

unsigned inverse_n(unsigned x, int pos, int n)
{
  return x ^ mask_bits(pos, n);
}

int main(void)
{
  unsigned x, pos, n;
  // x = 65535; 下位16bitをon

  printf("非負の整数を入力してください：");
  scanf("%u", &x);
  print_bits(x);

  printf("第何ビットから何ビット個を1にしますか(入力例：5 3)：");
  scanf("%u %u", &pos, &n);
  print_bits(set_n(x, pos, n));

  printf("第何ビットから何ビット個を0にしますか(入力例：5 3)：");
  scanf("%u %u", &pos, &n);
  print_bits(reset_n(x, pos, n));

  printf("第何ビットから何ビット個を反転させますか(入力例：5 3)：");
  scanf("%u %u", &pos, &n);
  print_bits(inverse_n(x, pos, n));

  return 0;
}
