void squeeze1(char s[], int c) {
  int i, j;

  for (i = j = 0; s[i] != '\0'; i++)
    if (s[i] != c)
      s[j++] = s[i];
  s[j] = '\0';
}

void squeeze2(char *s, char c) {
  char *d;

  d = s;
  while(*s != '\0') {
    if (*s != c)
      *d++ = *s++;
    else
      s++;
  }
  *d = '\0';
}