#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include "colors.h"
#include <stdlib.h>

#include "keywords.c"
#include "log.c"
#include "buffer.c"


#define MAX 500
#define MAX_KEYWORDS 64 

int _getline (int []);
void _printline (int *, int);
void clean (int *line, int len);
void words (int *, int length);



int main (int argc, char * argv[]) {
/* optional */
   system("clear");
   now();

  int * Keywords[MAX];
  malloc (sizeof (int)*MAX);
  int kw_count = keywords(Keywords);
  /* printf("\n%d\n\n",kw_count);
     printf(YELLOW); */
  while (--kw_count)
    printf("%s", Keywords[kw_count]);
  printf("\n");

  int  line[MAX];
  
  int linecount = 0;
  printf(YELLOW);
  for (int i = 0; i < linecount; i++) {
    if (linecount == 0) {
      printf(PURPLE);
    }
    //printf("%c",(char)line[i]);
  
  }

  bool running = true;
  while (running) {

    if (linecount == 0) {
      printf(CYAN);
      //system("ls");
    }
    else
      printf(PURPLE);
    linecount = _getline(&line[0]);
    words(line, linecount);

    //printf("%s\n",(char *)line);
    //now();
    if (linecount == 0) {
      printf(BLUE);
      printf("----> ");
    }
    else {
    //clean(&line[0], linecount);
      printf(BLUE);
    }
    //_printline(&line[0], linecount);
    clean(&line[0], linecount);
  }

  return 0;
}

void clean (int *line, int len) {
  int i = 0;
  while (i < MAX) line[i++] = '\0';
}

void _printline (int *line,int count) {
  int i = 0;
  int n = count;
  printf(RED);
  while (i < count && line[i] != '\0') {
    //printf("%c",line[i++]);
    count++;
  }
  printf("\n");
}

void words (int * line, int len) {

  char  word[MAX];
  int lc = 0;
  for (int i = 0; i < len; i++) {
    if (line[i] != ' ') {
      if (line[i] >='0' && line[i] <= '9')
        printf(YELLOW);
      if (line[i] >= 'A' && line[i] <= 'Z') {
        line[i] = tolower(line[i]);
        printf(BLUE);
      }
      if (line[i] >= 'a' && line[i] <= 'z') {
        word[lc++] = line[i];
        printf(BLUE);
      }
      else 
        printf(GREEN);
      printf("%c",line[i]);
    }
    else {
      printf(" ");
      word[lc] = '\0';
      printf(WHITE);

    }

  }

  printf(RED);
  printf("\n");
  word[lc] = '\0';
  //logfile(word);
  // check for word in kw's
  
}

int _getline (int *line) {

  int c;
  int i = 0;

  while ((c = getc(stdin)) != '\n') {
    if (line[0] == '\\') {
      printf("> ");
    }
    buffer (c);
    line[i++] = c;
  }
  line[i] = '\0';
  return i;
} 
