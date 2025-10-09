/**
stdio.hをincluceし忘れたプログラム．
コンパイルするとprintfが宣言されていないという警告が出る
*/

int main() {
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
$ gcc ファイル名
ファイル名: 関数 ‘main’ 内:
ファイル名:18:5: 警告: 関数 ‘printf’ の暗黙的な宣言です [-Wimplicit-function-declaration]
   18 |     printf("Hello world!\n");
      |     ^~~~~~
ファイル名:18:5: 警告: 組み込み関数 ‘printf’ の互換性がない暗黙的な宣言です
ファイル名:1:1: 備考: include ‘<stdio.h>’ or provide a declaration of ‘printf’
  +++ |+#include <stdio.h>
    1 | /**
ファイル名:23:5: 警告: 組み込み関数 ‘printf’ の互換性がない暗黙的な宣言です
   23 |     printf("Hello world!\n");
      |     ^~~~~~
ファイル名:23:5: 備考: include ‘<stdio.h>’ or provide a declaration of ‘printf’
ファイル名:25:3: 警告: 組み込み関数 ‘printf’ の互換性がない暗黙的な宣言です
   25 |   printf("Hello world!\n"); // printf文C
      |   ^~~~~~
ファイル名:25:3: 備考: include ‘<stdio.h>’ or provide a declaration of ‘printf’
*/
