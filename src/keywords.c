int keywords (int * w[]);

/* returns the number of keywords
 * in the (local) file ./keywords */

int keywords (int * w[]) {
  FILE * fp = fopen("keywords", "rb");

  int c;
  int wc = 0;
  int i = 0;

  int * word = malloc (sizeof (int)*64);
  while ((c = fgetc(fp)) && c != EOF) {
    i++;
    if (c >= 'a' && c <= 'z') {
      /*printf("%c", c)*/;
    }
    else {
      printf("%c", ' ');
    }
    if (c == '\n' || c == '\r')
      word[i] = '\0'; 
    else {
      word[i] = '\0';
      w[wc++] = &word[0];
      i = 0;
      }
    i++;
    }

  return wc;
}
