/**

氏名: 渡邊鉄太

学生番号: B255451

作成日: 2025-11-17

入出力の説明: 

動きの説明: 

感想: 

*/
/* 必要なヘッダファイルをこのあたりでincludeする．*/
#include <stdio.h>
/* ここにmain関数を書く */
int main(){
  char c;
  int ascii_code;
  c = getchar();
  scanf("%d", &ascii_code);
  printf("%d\n", c);
  printf("%c\n", ascii_code);
  return 0;
}