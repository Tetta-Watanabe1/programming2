/**

氏名:渡邊　鉄太

学生番号:B255451

作成日:2025-10-15

入出力の説明:
  標準入力に2つの整数min，maxが与えられる．
  min < max，min > 1およびmax <= 10000と仮定してよい．
  min以上，max未満の素数をすべて出力する．1行に1つずつ出力すること．

動きの説明:
  prime_numbersに素数を格納
  checkで素数判定の真偽を格納
  quantityに検出された素数の数を格納
  iは基本的にはカウンタ変数として用いた
  for文１で素数判定する数を決定
  for文２を用いて素数判定を行う
  if文１で素数でないことが確定した場合checkに0を代入し、for文２を抜ける
  if文２で判定している数が素数だった場合prime_numnerに格納
  for文３で検出された素数を出力

感想:はじめscanfの&を%にしてしまっていたので次回からは気を付けつける

*/

#include <stdio.h>
int main() {
  int max, min, check, prime_numbers[10000], i, quantity = 0;
  scanf("%d", &min);
  scanf("%d", &max);
  for (; min < max; min++) { // for文１
    check = 1;
    for (i = 2; i < min; i++) // for文２
      if ((min % i) == 0) {   // if文１
        check = 0;
        break;
      }
    if (check) { // if文２
      prime_numbers[quantity] = min;
      quantity++;
    }
  }
  for (i = 0; i < quantity; i++) // for文３
    printf("%d\n", prime_numbers[i]);
  return 0;
}
