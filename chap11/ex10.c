#include <stdio.h>
#include <string.h>

int max_mul(char *p)
{
  int mul = 1;
  while (*p)
  {
    if (*p++ == '.')
    {
      break;
    }

    mul *= 10;
  }
  return mul / 10;
}

int strtoi(const char *nptr)
{
  int sign = 1;
  if (*nptr == '-')
  {
    sign = -1;
    *nptr++;
  }

  int num = 0;
  int mul = max_mul(nptr);
  while (*nptr)
  {
    num += (mul * (*nptr++ - '0'));
    mul /= 10;
  }

  return sign * num;
}

long strtol(const char *nptr)
{
  long sign = 1;
  if (*nptr == '-')
  {
    sign = -1;
    *nptr++;
  }

  long num = 0;
  long mul = (long)max_mul(nptr);
  while (*nptr)
  {
    num += (mul * (*nptr++ - '0'));
    mul /= 10;
  }

  return sign * num;
}

double strtof(const char *nptr)
{
  double sign = 1.0;
  if (*nptr == '-')
  {
    sign = -1.0;
    *nptr++;
  }

  double num = 0.0;
  double mul = (double)max_mul(nptr);
  while (*nptr)
  {
    if (*nptr == '.')
    {
      *nptr++;
      continue;
    }

    num += (mul * (*nptr++ - '0'));
    mul /= 10;
  }

  return sign * num;
}

int main(void)
{
  char str[128];

  printf("整数：");
  scanf("%s", str);
  printf("\"%s\" => %d\n", str, strtoi(str));

  printf("整数：");
  scanf("%s", str);
  printf("\"%s\" => %ld\n", str, strtol(str));

  printf("小数：");
  scanf("%s", str);
  printf("\"%s\" => %f\n", str, strtof(str));

  return 0;
}
