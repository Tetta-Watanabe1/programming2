/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

感想: 

*/
#include <stdio.h>

/* ここにfind_letter関数を定義する */

int main() {
  char x;
  char str[100 + 1]; // 100文字以下の文字列
  int location, i;

  // デバッグ用
  for (i = 0; i < 100 + 1; i++)
    str[i] = 'a'; // scanfで読み込んだ文字列より後の配列要素をあらかじめ'a'で埋めておく．
  
  x = getchar(); 
  scanf("%100s", str);

  /* ここでfind_letter関数を呼び出し，戻り値を変数locationに代入する */

  printf("%d\n", location);
  return 0;
}
