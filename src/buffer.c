#include <stdio.h>
// keybuffer


void buffer (int c) {
  FILE * keybuf = malloc (sizeof (FILE *));
  keybuf = fopen("key", "a");
  fprintf(keybuf, "%c", c);
  fclose (keybuf);
}
