#include <stdio.h>
// keybuffer


void buffer (int c) {
  FILE * keybuf = malloc (sizeof (FILE *));
  keybuf = fopen("buffer.orb", "ab");
  fprintf(keybuf, "%c", c);
  fclose (keybuf);
}
