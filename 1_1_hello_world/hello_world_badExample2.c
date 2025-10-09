/**
main関数の型が宣言されていないと警告が出るプログラム．
*/

#include <stdio.h>

main() {
  int i;

  for (i = 0; i < 3; i++) { // for文A
    printf("Hello world!\n");
  }
  i = 2;
  while (i > 0) { // while文B
    i--;
    printf("Hello world!\n");
  }
  printf("Hello world!\n"); // printf文C
  return 0;
}
/*
$ gcc -Wall ファイル名
ファイル名.c:15:1: 警告: 戻り値の型をデフォルトの ‘int’ にします [-Wimplicit-int]
   15 | main() {
      | ^~~~
*/
