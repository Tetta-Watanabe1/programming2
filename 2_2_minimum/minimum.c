/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

感想: 

*/
#include <stdio.h>

// ここにint min(int a, int b)関数を書く

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
