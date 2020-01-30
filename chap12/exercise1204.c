// (input)
// Sato 178 61.2 80000
// Sanaka 175 62.5 73000
// Takao 173 86.2 0
// Mike 165 72.3 70000
// Masaki 179 77.5 70000

#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

enum sort_key
{
  height,
  name
};

typedef struct
{
  char name[NAME_LEN];
  int height;
  double weight;
  long schols;
} Student;

void swap_Student(Student *x, Student *y)
{
  Student temp = *x;
  *x = *y;
  *y = temp;
}

void sort_by_height(Student a[], int n)
{
  int i, j;
  for (i = 0; i < NUMBER; i++)
  {
    for (j = n - 1; j > i; j--)
    {
      if (a[j - 1].height > a[j].height)
        swap_Student(&a[j - 1], &a[j]);
    }
  }
}

void sort_by_name(Student a[], int n)
{
  int i, j;
  for (i = 0; i < NUMBER; i++)
  {
    for (j = n - 1; j > i; j--)
    {
      if (strcmp(a[j - 1].name, a[j].name))
        swap_Student(&a[j - 1], &a[j]);
    }
  }
}

int main(void)
{
  int i, sort_key;
  Student std[NUMBER];

  puts("氏名 身長 体重 奨学金を半角スペース区切りで入力。");
  for (i = 0; i < NUMBER; i++)
  {
    Student student;
    scanf("%s %d %lf %ld", student.name, &student.height, &student.weight, &student.schols);
    std[i] = student;
  }
  putchar('\n');

  for (i = 0; i < NUMBER; i++)
    printf("%10s %4d %3.1f %ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);
  putchar('\n');

  printf("何で昇順ソートしますか？[0...身長, 1...氏名]：");
  scanf("%d", &sort_key);
  putchar('\n');

  switch (sort_key)
  {
  case height:
    sort_by_height(std, NUMBER);
    break;
  case name:
    sort_by_name(std, NUMBER);
    break;
  default:
    break;
  }

  for (i = 0; i < NUMBER; i++)
    printf("%10s %4d %3.1f %ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);

  return 0;
}
