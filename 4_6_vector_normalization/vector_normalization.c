/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

感想: 

*/
#include <stdio.h>

#define MAX_LEN 10

// ここにnormalize関数を書く（定義する）
void normalize(float vec[], int dim){
}

int main() {
  float x[MAX_LEN];
  int n;
  int i;

  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    float element;
    scanf("%f", &element);
    x[i] = element;
  }

  // ここでnormalize関数を呼び出す
  
  for (i = 0; i < n; i++) {
    printf("%.4f\n", x[i]);
  }
  return 0;
}
