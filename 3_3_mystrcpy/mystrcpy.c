/**

氏名: 渡邊鉄太

学生番号: B255451

作成日: 205-11-17

入出力の説明: 

動きの説明: 

感想: 

*/
#include <stdio.h>

/* ここにmystrcpy関数を書く．この関数内でSIZEや80を使う必要はない */

#define SIZE 80

int main() {
  char s1[SIZE];
  char s2[SIZE];
  char c;
  int i;

  // s1に1行読み込む．長くとも(SIZE-1)文字まで
  i = 0;
  c = getchar();
  while (c != '\n' && i < SIZE - 1) {
    s1[i] = c;
    i++;
    c = getchar();
  }
  s1[i] = '\0'; // 末尾のヌル文字

  // s2を数字で埋める（デバッグ用）
  for (i = 0; i < SIZE - 1; i++)
    s2[i] = '0' + (i % 10);

  // ここからmystrcpy関数を呼び出す

  printf("%s\n", s2); // コピーした文字列を出力する
  return 0;
}
