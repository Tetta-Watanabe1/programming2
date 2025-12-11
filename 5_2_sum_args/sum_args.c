/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

感想: 

*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	int sum = 0;
	for(int i = 1;i < argc;i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);
}