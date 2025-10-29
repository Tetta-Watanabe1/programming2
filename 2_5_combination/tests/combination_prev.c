/**

氏名:渡邊鉄太

学生番号:B255451

作成日:2025-10-29

入出力の説明:
  標準入力に2つの整数nとrが，この順に与えられる．
  nとrはいずれも整数で，1<=n<=12，1<=r<=nとする．
  組合せの数nCrを出力する．

動きの説明:2_4のfactorial関数を利用した.

感想:2_4のfactorial関数を再利用できてよかった.

*/
#include <stdio.h>

/* ここに int factorial(int n) 関数を定義する */
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
  printf("%d\n", factorial(n) / factorial(r) / factorial(n - r));
  return 0;
}
