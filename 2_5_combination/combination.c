/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

感想: 

*/
#include <stdio.h>

/* ここに int factorial(int n) 関数を定義する */

int main() {
  int n, r;

  scanf("%d", &n);
  scanf("%d", &r);
  printf("%d\n", factorial(n) / factorial(r) / factorial(n - r));
  return 0;
}
