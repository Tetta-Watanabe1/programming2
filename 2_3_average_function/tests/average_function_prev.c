/**

氏名:渡邊　鉄太

学生番号:B255451

作成日:2025-10-19

入出力の説明:
  まず要素数を入力させ、その後に要素を入力させる.
  要素の平均を出力する.

動きの説明:
  変数sumに入力された要素の総和を格納する
  sumを要素数nで割り、平均を求める

感想:関数の因数に配列を渡すことに違和感を感じたので慣れていきたい.

*/
#include <stdio.h>
#define MAX 100

// ここにaverage関数を書く（関数を定義する）．
float average(float arr[], int n) {
  float sum = 0.0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return sum / n;
}

int main() {
  int num, i;
  float array[MAX], ave;

  scanf("%d", &num);
  if (num <= MAX) {
    for (i = 0; i < num; i++) {
      scanf("%f", &array[i]);
    }
    ave = average(array, num);
    printf("%.3f\n", ave);
  }
  return 0;
}

/*
  余談：

  ここ（main関数より後ろ）にaverage関数を移動してみよう．average関数が
  見つからないというコンパイルエラーになる．次のようなaverage関数の宣
  言（プロトタイプ宣言という）をmain関数の前に書くことでコンパイルエラー
  がなくなる．

  戻り値の型 average(引数);

  プロトタイプ宣言はプログラミングIIIで学習する．
  明快入門C 54 関数プロトタイプ
*/
