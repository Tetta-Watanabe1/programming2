/**

氏名:渡邊　鉄太

学生番号:B255451

作成日:2025-10-19

入出力の説明:
  標準入力に3つの整数が与えられる．
  3つの整数のうち最も小さい整数を表示する．

動きの説明:3つの整数のうち最も小さい整数を表示する．

感想:この考え方は1_4の課題にも応用できそうだと感じた.

*/
#include <stdio.h>

// ここにint min(int a, int b)関数を書く
int min(int a, int b) {
  if (a < b) {
    return a;
  } else {
    return b;
  }
}

int main() {
  int a, b, c, m;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  // aとbのうち小さいものをmに代入
  m = min(a, b);

  // 三つのうち最も小さいものをmに代入
  m = min(m, c);

  printf("%d\n", m);
  return 0;
}
