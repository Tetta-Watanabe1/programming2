#include <stdio.h>
#include <string.h>

void squeeze1(char s[], char c);
void squeeze2(char s[], char c);

int main() {
  char s1[100], s2[100], c;

  c = getchar();
  scanf("%99s", s1);
  strcpy(s2, s1);
  squeeze1(s1, c);
  squeeze2(s2, c);
  printf("%s\n", s1);
  printf("%s\n", s2);
  return 0;
}
