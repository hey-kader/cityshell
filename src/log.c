#include <time.h>
#include <stdlib.h>
void logfile(char *);
int *now(void);

int *now() {
   char s[64];
   time_t t = time(NULL);
   struct tm *tm = localtime(&t);
  strftime(s, sizeof(s), "%c", tm);
  printf("%s\n", s);
  return &s[0];
}
void logfile (char *data) {
  FILE * fp = fopen("log", "wb");
  int i = 0;
  //fputs(fp, now());
  int length = strlen(data)-1;
  while (i < length)
    fputc(fp, data[i++]);
  fclose(fp);
} 
