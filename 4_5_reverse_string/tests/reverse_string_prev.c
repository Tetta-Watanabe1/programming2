/**

氏名: 渡邊鉄太

学生番号: B255451

作成日: 2025-12-03

入出力の説明: 
  標準入力から空白を含まない文字列を読み込む．読み込む文字列長は79文字までとする．
  1行目は入力された文字を反転して出力する．
  2行目は入力された文字を2回反転して出力する．

動きの説明: 文字列へのポインタを引数として受け取り, その文字列を反転する.
  反転した文字列のを返す.ポインタを返す.

感想: 最初はp = result_stringとしていたがresult_stringはreverse_string内で定義されたローカル変数なので、その時はポインタを渡せるが終了したときに変数が削除されるためコンパイルできるがバグになっていた.

*/
#include <stdio.h>
#include <string.h>

// ここにreverse_string関数を定義する．
char *reverse_string(char *p){
	char result_string[80];
	int s = 0;
	for(int i = strlen(p) - 1;i >= 0;i--){
		result_string[s++] = p[i];
	}
	result_string[s] = '\0';
	for(int i = 0;result_string[i] != '\0';i++)
		p[i] = result_string[i];
	return p;
}

#define LEN 79

int main() {
  char s[LEN + 1];
  char s2[LEN + 1];
  char *t, *t1;

  scanf("%79s", s);
  strcpy(s2, s); // 文字列sをs2にコピーする
  reverse_string(s);
  printf("%s\n", s);
  t1 = reverse_string(s2);
  t = reverse_string(t1);
  printf("%s\n", t);
  
  return 0;
}
