#include <stdio.h>

struct xyz
{
  int x;
  long y;
  double z;
};

struct xyz scan_xyz()
{
  struct xyz temp;

  printf("int x: ");
  scanf("%d", &temp.x);
  printf("long y: ");
  scanf("%ld", &temp.y);
  printf("double z: ");
  scanf("%lf", &temp.z);

  return temp;
}

int main(void)
{
  struct xyz obj = scan_xyz();

  printf("obj.x = %d\n", obj.x);
  printf("obj.y = %ld\n", obj.y);
  printf("obj.z = %lf\n", obj.z);

  return 0;
}
