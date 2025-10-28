/**

氏名:渡邊　鉄太

学生番号:B255451

作成日:2025-10-29

入出力の説明:

動きの説明: 

感想: 

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
