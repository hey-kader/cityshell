char *  name (void) {
  FILE * n = fopen("name","rb");

  int c;
  int l = 0;
  char str[64];
  malloc (sizeof(int)*64);
  while ((c = fgetc(n)) != EOF)
   str[l++] = c; 
  str[l] = '\0';
  printf("%s", str);
  return &str[0];

}
