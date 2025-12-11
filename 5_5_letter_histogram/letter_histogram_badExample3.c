/*
  文字の入力を待たずにメモリの確保を繰り返す．
  Ctrl+Cキーでプログラムを終了できる人以外は実行しない方がよい．

  letter_histogram_badExample2.c と同じように確保したメモリ領域を使っ
  ていない．文字の入力など待たずにmalloc関数でメモリを確保する．一回あ
  たり100KBのメモリを確保する．

  確保したメモリ領域を使っていないので物理メモリに影響がないかというと，
  物理メモリを消費していることがWindowsのリソースモニタなどで確認でき
  る．

  letter_histogram_badExample2.c の続き．
  悪い例はおしまい．
 */

#include <stdlib.h>

int main() {
  while (1) {
    malloc(100000); // 100 000
  }
  return 0;
}
