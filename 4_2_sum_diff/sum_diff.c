/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

感想: 

*/
#include <stdio.h>

// このあたりにsum_diff関数を定義する．
void sum_diff(int a, int b, int *sum, int *diff ){
	*sum = a + b;
	*diff = a - b;
}

int main() {
  int a, b;
  int s; // 和を代入する変数
  int d; // 差を代入する変数

  scanf("%d", &a);
  scanf("%d", &b);
  /* テスト用の適当な代入
  s = 100;
  d = 100; */

  // ここでsum_diff関数を呼び出す．
	sum_diff(a, b, &s, &d);
  printf("sum  %7d\n", s);
  printf("diff %7d\n", d);
  return 0;
}
