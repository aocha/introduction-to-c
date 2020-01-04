#include <stdio.h>

#define STUDENTS 6
#define SUBJECTS 2

int main(void)
{
  int i, j;
  int score[STUDENTS][SUBJECTS];       // = {{91, 34}, {43, 24}, {50, 38}, {30, 48}, {43, 32}, {43, 23}};
  int sum_per_subject[SUBJECTS] = {};  // = {300, 199}
  int sum_per_students[STUDENTS] = {}; // = {125, 67, 88, 78, 75, 66}

  puts("1つ目の科目：国語、2つ目の科目：数学");
  printf("%d人の点数を入力してください。\n", STUDENTS);
  for (i = 0; i < STUDENTS; i++)
  {
    printf("%d人目\n", i + 1);
    for (j = 0; j < SUBJECTS; j++)
    {
      printf("%dつ目の科目：", j + 1);
      scanf("%d", &score[i][j]);
    }
  }

  for (i = 0; i < STUDENTS; i++)
  {
    sum_per_subject[0] += score[i][0];
    sum_per_subject[1] += score[i][1];
    sum_per_students[i] += score[i][0] + score[i][1];
  }

  puts("科目ごとの合計点と平均点");
  puts("----------------------");
  for (i = 0; i < SUBJECTS; i++)
  {
    printf("%dつ目の科目 %5d %5.1f\n", i + 1, sum_per_subject[i], (double)sum_per_subject[i] / STUDENTS);
  }

  putchar('\n');
  puts("学生ごとの合計点と平均点");
  puts("----------------------");
  for (i = 0; i < STUDENTS; i++)
  {
    printf("%d人目 %5d %5.1f\n", i + 1, sum_per_students[i], (double)sum_per_students[i] / SUBJECTS);
  }

  return 0;
}
