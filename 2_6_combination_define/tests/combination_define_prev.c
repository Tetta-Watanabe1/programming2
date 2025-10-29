/**

氏名:渡邊　鉄太

学生番号:B255451

作成日:2025-10-29

入出力の説明:

動きの説明: 

感想:

*/
#include <stdio.h>

/* 先ほどと同様に，ここに作成した int factorial(int n) 関数を定義する */
int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  int n, r;

  scanf("%d", &n);
  scanf("%d", &r);
  #ifdef VERBOSE
    printf("%d / %d / %d = ", factorial(n), factorial(r), factorial(n - r));
  #endif
  printf("%d\n", factorial(n) / factorial(r) / factorial(n - r));
  return 0;
}
