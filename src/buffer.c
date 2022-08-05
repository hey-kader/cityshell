#include <stdio.h>
// keybuffer


void buffer (int c) {
  FILE * keybuf;
  keybuf = fopen("keybuf", "a");
  fputc(keybuf, c);
}
