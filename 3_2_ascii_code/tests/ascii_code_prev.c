/**

氏名: 渡邊鉄太

学生番号: B255451

作成日: 2025-11-17

入出力の説明: 標準入力から1文字と整数nを読み込む．

動きの説明: 
  1行目に入力された文字のASCIIコード（10進表現の整数値）を出力する．
  2行目に入力された文字からn文字を出力する．

感想: 上手くインクリメント演算子を使うことができた．

*/
/* 必要なヘッダファイルをこのあたりでincludeする．*/
#include <stdio.h>
/* ここにmain関数を書く */
int main() {
  char c;
  int count;
  c = getchar();
  scanf("%d", &count);
  printf("%d\n", c);
  for (int i = 0; i < count; i++)
    printf("%c", c++);
  printf("\n");
  return 0;
}