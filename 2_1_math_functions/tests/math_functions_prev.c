/**

氏名:渡邊　鉄太

学生番号:B255451

作成日:2025-10-19

入出力の説明:
    与えられた二つの実数(一つ目は正の数)をdouble型の変数に代入する.
    入力された順にx, yとする.

動きの説明:
    計算結果を空白で区切って標準出力に出す。改行は付かない。
        sqrt(x) を "%.5lf"で出力
        pow(x, y) を "%.5e"で出力
        sin(x) を "%.5lf" で出力
        log10(x) を "%.5lf" で出力
        log(x) を "%.5lf" で出力
感想:double型のフォーマット指定子を忘れていた.

*/

#include <math.h>
#include <stdio.h>
int main() {
  double x, y;
  scanf("%lf", &x);
  scanf("%lf", &y);
  printf("%.5lf ", sqrt(x));
  printf("%.5e ", pow(x, y));
  printf("%.5lf ", sin(x));
  printf("%.5lf ", log10(x));
  printf("%.5lf \n", log(x));
  return 0;
}