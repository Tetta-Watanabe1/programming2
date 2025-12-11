/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

感想: 

*/
#include <stdio.h>

int main(int argc, char* argv[]) {
  char c;

  while ((c = getchar()) != EOF) {  // EOFはファイル末尾
    putchar(c); // 不要なら削除せよ
    malloc(1000000); // 1文字読むたびに無駄な1MBメモリを確保する．不要なので削除せよ
  }
  return 0;
}
