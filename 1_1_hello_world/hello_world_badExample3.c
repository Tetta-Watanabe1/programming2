/**
改行や字下げがきちんと行われてないプログラム．
clang-format -i ファイル名
を実行すると，改行や字下げが調整される．
*/

#include <stdio.h>

int main() { int i; for (i = 0; i < 3; i++) { printf("Hello world!\n"); } i = 2; while (i > 0) { i--; printf("Hello world!\n"); } printf("Hello world!\n"); return 0; }
