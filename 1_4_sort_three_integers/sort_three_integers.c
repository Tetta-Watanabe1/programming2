/**

氏名:渡邊　鉄太

学生番号:B255451

作成日:2025-10-9

入出力の説明:
  3つの整数を入力させる
  小さい順に入力された3つの整数を，1行に一つずつ出力する．

動きの説明:
  変数iはカウンタ変数
  配列aにfor文１で入力された整数を格納
	変数max,mid,minは大中小それぞれの値を格納するために定義
	for文２で入力された整数の最大値と最小値を調べて変数maxとminに格納
	変数maxとminに格納されていない値が中央値なのを利用してfor文３で中央値を変数midに格納
	printf関数で変数maxとmid,minに格納されている値を一行ずつ出力

感想:変数max,mid,minを定義せずにif文で６パターンの場合分けをしてもよかったが,ためになったと感じているのでやってよかった.

*/

#include <stdio.h>
int main() {
  int a[3], i;
  for (i = 0; i < 3; i++) // for文１
    scanf("%d", &a[i]);
  int max = a[0], mid, min = a[0];
  for (i = 1; i < 3; i++) { // for文２
    if (max < a[i])
      max = a[i];
    if (min > a[i])
      min = a[i];
  }
  for (i = 0; i < 3; i++) // for文３
    if (max != a[i] && min != a[i])
      mid = a[i];
  printf("%d\n%d\n%d\n", min, mid, max);
}