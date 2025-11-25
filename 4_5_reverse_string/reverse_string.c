/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

感想: 

*/
#include <stdio.h>
#include <string.h>

// ここにreverse_string関数を定義する．

#define LEN 79

int main() {
  char s[LEN + 1];
  char s2[LEN + 1];
  char *t, *t1;

  scanf("%79s", s);
  strcpy(s2, s); // 文字列sをs2にコピーする
  reverse_string(s);
  printf("%s\n", s);
  t1 = reverse_string(s2);
  t = reverse_string(t1);
  printf("%s\n", t);
  
  return 0;
}
