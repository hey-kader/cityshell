#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include "colors.h"
#include <stdlib.h>

#define MAX 500

int _getline (int []);
void _printline (int *, int);
void clean (int *line, int len);
void words (int *, int length);

int main (int argc, char * argv[]) {

  system("clear");
  int  line[MAX];
  
  int linecount = 0;
  printf(YELLOW);
  for (int i = 0; i < linecount; i++) {
    if (linecount == 0) {
      printf(PURPLE);
      system("ls");
      break;
    }
    printf("%c",line[i]);
  }

  bool running = true;
  while (running) {

    if (linecount == 0) {
      printf(CYAN);
      //system("ls");
    }
    else {
      printf(RED);
      //printf("-->\t");
      ;
    }
    linecount = _getline(&line[0]);
    words(&line[0], linecount);

    if (linecount == 0) {
      printf(BLUE);
      printf("----> ");
    }
    else {
    clean(&line[0], linecount);
      printf(BLUE);
    }
    //_printline(&line[0], linecount);
    //clean(&line[0], linecount);
  }

  return 0;
}

void clean (int *line, int len) {
  int i = 0;
  while (i < MAX)
    line[i++] = '\0';
}

void _printline (int *line,int count) {
  int i = 0;
  int n = count;
  printf(RED);
  while (i < count && line[i] != '\0') {
    printf("%c",line[i++]);
    count++;
  }
  printf("\n");
}

void words (int * line, int len) {

  for (int i = 0; i < len; i ++) {
    if (line[i] != ' ') {
      if (line[i] >='0' && line[i] <= '9')
        printf(YELLOW);
      else if (line[i] >= 'A' && line[i] <= 'Z') {
        line[i] = tolower(line[i]);
        printf(BLUE);
      }
      else
        printf(GREEN);
      printf("%c",line[i]);
    }
    else {
      printf(WHITE);
      printf(" ");
    }
  }
  printf("\n");
}

int _getline (int *line) {

  int c;
  int i = 0;

  while ((c = getc(stdin)) != '\n') {
    if (line[0] == '\\') {
      printf("> ");
    }
    line[i++] = c;
  }
  line[i] = '\0';
  return i;
} 
