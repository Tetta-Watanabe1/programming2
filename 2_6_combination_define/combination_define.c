/**

氏名:渡邊　鉄太

学生番号:B255451

作成日:2025-10-29

入出力の説明:
  標準入力に2つの整数nとrが，この順に与えられる．
  nとrはいずれも整数で，1<=n<=12，1<=r<=nとする．
  （VERBOSEを定義しないときの単純な出力）
    組合せの数nCrを出力する．
  （VERBOSEを定義したときの出力）
    nとrの階乗の値を表示した後，組合せの数nCrを出力する．

動きの説明: #ifdef VRBOSEと#endifで，VERBOSEが定義されていればnとrの階乗の値を表示する．

感想:
  作る前はVERBOSEが定義されているときの動作に表示しなければいけないすべて書こうとしていたが、
  定義されていないときに表示する部分を再利用できることに気づいて簡単に書けた．

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
