/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

感想: 

*/
#include <stdio.h>

// ここにpartial_sum関数を定義する．
int partial_sum(int *p, int w){
	int sum = 0;
	for(int i = 0;i < w;i++)
		sum += p[i];
	return sum;
}

int main() {
  int a[50] =
    {24, 3, 6, 69, 8, 41, 53, 25, 17, 38,
     90, 0, 22, 24, 7, 13, 33, 44, 89, 38,
     92, 99, 54, 18, 52, 74, 6, 80, 5, 73,
     24, 24, 46, 64, 49, 48, 91, 41, 9, 93,
     70, 83, 47, 72, 43, 86, 34, 60, 49, 40};
  int s, w, sum;

  scanf("%d %d", &s, &w);
  // ここでpartial_sum関数を呼び出し，
  // 関数の戻り値を変数sumに代入する．
	sum = partial_sum(a + s, w);
  printf("%d\n", sum);
  return 0;
}
