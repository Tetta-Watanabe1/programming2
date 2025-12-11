/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

感想: 

*/

#include<stdio.h>

int main(int argc, char *argv[]) {
	printf("%d\n", argc);
	for(int i = 1;argv[i] != NULL;i++)
		printf("%s\n", argv[i]);
  return 0;
}
