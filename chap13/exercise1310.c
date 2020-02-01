#include <stdio.h>
#include <ctype.h>

int main(void)
{
  FILE *sfp, *dfp;
  char sfname[FILENAME_MAX] = "source.txt";
  char dfname[FILENAME_MAX] = "lower.txt";
  int ch;

  if ((sfp = fopen(sfname, "r")) != NULL)
  {
    if ((dfp = fopen(dfname, "w")) != NULL)
    {
      while ((ch = fgetc(sfp)) != EOF)
      {
        fputc(tolower(ch), dfp);
      }
      fclose(dfp);
    }
    fclose(sfp);
  }

  return 0;
}
