/**

氏名:渡邊　鉄太

学生番号:B255451

作成日:2025-10-02

入出力の説明:Hello world!を4行出力する

動きの説明:
  for文でprintf文を4回繰り返す。
  変数iはfor文の繰り返し変数。

感想:mainの後につける()を忘れていたので次回からは気を付けたい。

*/

#include <stdio.h>
int main() {
  int i;
  for (i = 0; i < 4; i++)
    printf("Hello world!\n");
}