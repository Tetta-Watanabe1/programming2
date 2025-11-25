/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

感想: 

*/
#include <stdio.h>

/* ここにcomp_exch関数を定義する．*/

int main() {
  int a, b, c, d, e;

  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  
  /*
    ここで comp_exch 関数を呼び出す．
    comp_exch 関数の引数は二つ．
    comp_exch 関数の呼び出し以外はしてはならない．
    手引きに記載しているように，複数回 comp_exch 関数を呼び出すことになる．
  */
  
  printf("%d %d %d %d %d\n", a, b, c, d, e); // printf文は書き換えてはならない．
  return 0;
}
