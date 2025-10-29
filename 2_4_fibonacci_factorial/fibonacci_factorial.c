/**

氏名:渡邊　鉄太

学生番号:B255451

作成日:2025-10-29

入出力の説明:
  標準入力に1つの正の整数nが与えられる．nは1<=n<=12を満たす．
  フィボナッチ数 と階乗を表示する．

動きの説明:
  finonacci関数の説明
    if文で場合分けをして0と1以外の場合fibonacci関数を再び使うことでF_(n-1)とF_(n-2)を簡単に求めた.
  factorial関数の説明
    if文で場合分けをして0以外の場合factorial関数を再び使うことでn!を簡単に求めた.

感想:高校の時にpythonだったがフィボナッチ数列の書き方について習っていたのですぐにかけた.

*/
#include <stdio.h>

/* この辺りに二つの関数を書く */
int fibonacci(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  int n;

  scanf("%d", &n);
  printf("%d ", fibonacci(n));
  printf("%d\n", factorial(n));
  return 0;
}