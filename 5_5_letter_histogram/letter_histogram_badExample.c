/*
  1文字読み取るたびに100MBのメモリを確保する
  EnterキーのあとCtrl+DキーでEOFを入力できる．
  Ctrl+Cキーでプログラムを終了できる人以外は実行しない方がよい．

  確保したメモリ領域が物理メモリに割り当てられることがWindowsのリソー
  スモニタなどで確認できる．for文で確保したメモリ領域に値を代入してい
  る．

  letter_histogram_badExample2.c に続く．
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  char c;

  while ((c = getchar()) != EOF) {  // EOFはファイル末尾
    char *p;
    int i;

    putchar(c);
    p = malloc(100000000); // 100 000 000
    for (i = 0; i < 100000000; i++) { // for文
      p[i] = i;
    }
  }

  return 0;
}
