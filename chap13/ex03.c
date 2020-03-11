#include <stdio.h>
#include <string.h>

typedef struct
{
  char name[100];
  double height;
  double weight;
} Person;

void swap(Person *p1, Person *p2)
{
  Person temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}

void sort_asc_by_height(Person v[], int n)
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = i; j < (n - 1); j++)
    {
      if (v[j].height > v[j + 1].height)
        swap(&v[j], &v[j + 1]);
    }
  }
}

int main(void)
{
  FILE *fp;
  Person pa[6];
  int i;
  int ninzu = 0;
  char name[100];
  double height, weight;
  double hsum = 0.0;
  double wsum = 0.0;

  if ((fp = fopen("hw.dat", "r")) == NULL)
  {
    puts("ファイルをオープンできません。");
  }
  else
  {
    while (fscanf(fp, "%s %lf %lf", name, &height, &weight) == 3)
    {
      Person p = {"", height, weight};
      strcpy(p.name, name);
      pa[ninzu] = p;

      ninzu++;
      hsum += height;
      wsum += weight;
    }

    sort_asc_by_height(pa, ninzu);

    for (i = 0; i < ninzu; i++)
    {
      printf("%-10s %5.1f %5.1f\n", pa[i].name, pa[i].height, pa[i].weight);
    }
    printf("----------------------\n");
    printf("平均       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
    fclose(fp);
  }

  return 0;
}
