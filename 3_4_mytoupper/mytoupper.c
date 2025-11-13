/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

感想: 

*/
#include <stdio.h>

/* lower2upper関数をこの辺りに定義する */

int main() {
  char c;
  while ((c = getchar()) != '\n') {

    /* ここでlower2upper関数を呼び出す．引数は変数c．戻り値はcに代入する */

    printf("%c", c);
  }
  printf("\n");
  return 0;
}
