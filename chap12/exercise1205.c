#include <stdio.h>
#include <math.h>

#define sqr(n) ((n) * (n))

enum moving_method
{
  point,
  distance
};

typedef struct
{
  double x;
  double y;
} Point;

typedef struct
{
  Point pt;
  double fuel;
} Car;

double distance_of(Point pa, Point pb)
{
  return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

void put_info(Car c)
{
  printf("現在位置: (%.2f, %.2f)\n", c.pt.x, c.pt.y);
  printf("残り燃料: %.2fリットル\n", c.fuel);
}

int move(Car *c, Point dest)
{
  double d = distance_of(c->pt, dest);
  if (d > c->fuel)
    return 0;

  c->pt = dest;
  c->fuel -= d;
  return 1;
}

int main(void)
{
  Car mycar = {{0.0, 0.0}, 90.0};

  while (1)
  {
    int select, moving_method;
    double x, y;
    Point dest;

    put_info(mycar);
    printf("移動しますか？【Yes...1/No...0】: ");
    scanf("%d", &select);
    if (select != 1)
      break;

    printf("入力方法は？【座標指定...0/距離距離...1】");
    scanf("%d", &moving_method);
    switch (moving_method)
    {
    case point:
      printf("目的地のX座標: ");
      scanf("%lf", &dest.x);
      printf("　　　　Y座標: ");
      scanf("%lf", &dest.y);
      break;

    case distance:
      printf("移動距離X方向: ");
      scanf("%lf", &x);
      printf("　　　　Y方向: ");
      scanf("%lf", &y);
      dest.x += x;
      dest.y += y;
      break;

    default:
      break;
    }

    if (!move(&mycar, dest))
      puts("燃料不足で移動できません。");
  }

  return 0;
}
