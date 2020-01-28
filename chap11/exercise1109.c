#include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[128] = "abcdefg";
  char str2[128] = "hijklmn";
  char str3[128] = "opqrstu";

  printf("str1 = %s\n", str1);
  printf("str2 = %s\n", str2);
  printf("str3 = %s\n", str3);

  printf("strlen(str1) = %lu\n", strlen(str1));
  printf("strcpy(str2, str1) = %s\n", strcpy(str2, str1));
  printf("strncpy(str3, str1, 3) = %s\n", strncpy(str3, str1, 3));
  printf("strcat(str3, str1) = %s\n", strcat(str3, str1));
  printf("strncat(str3, str1, 3) = %s\n", strncat(str3, str1, 3));
  printf("strcmp(str3, str1) = %d\n", strcmp(str3, str1));
  printf("strncmp(str3, str1, 3) = %d\n", strncmp(str3, str1, 3));

  return 0;
}
