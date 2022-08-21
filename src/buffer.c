#include <stdio.h>
#include <stdlib.h>
// keybuffer

#include "name.c"

void buffer (int c, char * filename) {
  FILE * keybuf = malloc (sizeof (int)*2000);
	
	system("cd out");

	/* 
	  lets see if the file exists, 
	  if it does, lets read it out
	  this way, when we pass the buffer function
	  the name of a file/a path, it will be able 
	  to read through the file
  */

	//printf("%s\n", filename);
  keybuf = fopen(filename, "ab");
  fprintf(keybuf, "%c", c);
  fclose (keybuf);

}

