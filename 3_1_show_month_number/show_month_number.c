/**

氏名: 渡邊鉄太

学生番号: B255451

作成日:2025-11-17

入出力の説明: 
  標準入力から一単語読み込む．
  複数の単語が与えられた場合は最初の単語以外は無視する．
  読み込んだ単語が，月名の英語表記に対応する場合は月の数値（1~12),月名でない場合は0を出力する．

動きの説明: strcmp関数を使って入力された文字列と月名を比較する.

感想:switch文を使えばきれいにかける気がしたが、月名でないときに対応できなかった.

*/
#define LEN 10      // 入力文字列長の最大値（使わないで構わない）
#define N_MONTHS 12 // 月の数（使わないで構わない）

#include <stdio.h>
#include <string.h>

int main() {
  char s[11];
  scanf("%10s", s);

  // swich文で書けるか確認したい
/*   switch (s[0]) {
  case 'J':
    if (s[1] == 'a') {
      printf("1\n");
    } else if (s[2] == 'n') {
      printf("6\n");
    } else {
      printf("7\n");
    }
    break;
  case 'F':
    printf("2\n");
    break;
  case 'M':
    if (s[2] == 'r') {
      printf("3\n");
    } else {
      printf("5\n");
    }
    break;
  case 'A':
    if (s[1] == 'p') {
      printf("4\n");
    } else {
      printf("8\n");
    }
    break;
  case 'S':
    printf("9\n");
    break;
  case 'O':
    printf("10\n");
    break;
  case 'N':
    printf("11\n");
    break;
  case 'D':
    printf("12\n");
    break;
  } */
  //switch文で書くと月名じゃないときに対応できない

if(strcmp(s,"January")==0)
  printf("1\n");
else if(strcmp(s,"February")==0)
  printf("2\n");
else if(strcmp(s,"March")==0)
  printf("3\n");
else if(strcmp(s,"April")==0)
  printf("4\n");
else if(strcmp(s,"May")==0)
  printf("5\n");
else if(strcmp(s,"June")==0)
  printf("6\n");
else if(strcmp(s,"July")==0)
  printf("7\n");
else if(strcmp(s,"August")==0)
  printf("8\n");
else if(strcmp(s,"September")==0)
  printf("9\n");
else if(strcmp(s,"October")==0)
  printf("10\n");
else if(strcmp(s,"November")==0)
  printf("11\n");
else if(strcmp(s,"December")==0)
  printf("12\n");
else
  printf("0\n");
  return 0;
}
