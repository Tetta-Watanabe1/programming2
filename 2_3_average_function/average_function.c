/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

感想: 

*/
#include <stdio.h>
#define MAX 100

// ここにaverage関数を書く（関数を定義する）．

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
