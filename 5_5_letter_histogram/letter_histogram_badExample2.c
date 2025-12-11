/*
  1文字読み取るたびに100MBのメモリを確保する
  EnterキーのあとCtrl+DキーでEOFを入力できる．
  Ctrl+Cキーでプログラムを終了できる人以外は実行しない方がよい．

  letter_histogram_badExample.c と違い，確保したメモリ領域はそのまま使っ
  ていない．確保したメモリ領域が物理メモリに割り当てられていなさそうな
  ことがWindowsのリソースモニタなどで確認できる．メモリを確保しただけ
  では物理メモリが使われるわけではないようだ．

  letter_histogram_badExample.c の続き．
  letter_histogram_badExample3.c に続く．
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  char c;

  while ((c = getchar()) != EOF) {  // EOFはファイル末尾
    putchar(c);
    malloc(100000000); // 100 000 000
  }

  return 0;
}
