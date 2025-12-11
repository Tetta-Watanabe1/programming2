/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

感想: 

*/
#include <stdio.h>

/** 使い方を出力する */
void help() {
  printf("Usage: find_options [options]\n"
         "Options:\n"
         "--help, -h                  Display this information\n"
         "--version, -v               Display version information\n"
         "--search <arg>, -s <arg>    Search <arg> string\n"
         "--save <file>, -S <file>    Save into <file>\n"
         "--test, -t                  Test this command\n");
}

/** バージョン番号を出力する */
void version() {
  printf("find_options 1.3\n");
}

/** 文字列を検索する（未実装） */
int search(char term[]) {
  printf("Search %s (not implemented)\n", term);
  return 0;
}

/** ファイルに保存する（未実装） */
int save(char filename[]) {
  printf("Save into %s (not implemented)\n", filename);
  return 0;
}

/** このコマンドをテストする（未実装） */
int test(int i, char str[]) {
  if (0 < i && i < 5) {
    printf("Test case %d with \"%s\" (not implemented)\n", i, str);
  } else if (5 <= i && i < 10) {
    printf("Test case %d (\"%s\" is ignored) (not implemented)\n", i, str);
  }
  return 0;
}

// ここにmain関数を定義する．
