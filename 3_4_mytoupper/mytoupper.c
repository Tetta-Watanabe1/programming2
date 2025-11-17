/**

氏名: 渡邊鉄太

学生番号: B255451

作成日: 2025-11-17

入出力の説明:

動きの説明:

感想:

*/
#include <stdio.h>

/* lower2upper関数をこの辺りに定義する */
char lower2upper(char c) {
  if ('a' <= c && c <= 'z') {
    return c - 1;
  }
  return c;
}

int main() {
  char c;
  while ((c = getchar()) != '\n') {

    /* ここでlower2upper関数を呼び出す．引数は変数c．戻り値はcに代入する */
    c = lower2upper(c);

    printf("%c", c);
  }
  printf("\n");
  return 0;
}
