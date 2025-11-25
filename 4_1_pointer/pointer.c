/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

感想: 

*/
#include <stdio.h>

int main() {
  int a, b = 0;
  float f, g = 0.0;
  char s[11], t[11] = "0123456789";
  int i;

  scanf("%d", &a);
  scanf("%f", &f);
  scanf("%10s", s);

  // ただし，a,f,sのアドレスをポインタに格納する．

  // ポインタを使ってa,f,s[]の値をb,g,t[]にコピーする．
  
  printf("%d\t%f\t%s\n", b, g, t);

  return 0;
}
