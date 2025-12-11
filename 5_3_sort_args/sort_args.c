/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

感想: 

*/
#include <stdio.h>

void dictional_sort(char **a, char **b, int i){

	while((a[i] != '\0' || b[i] != '\0') && (b[i] > a[i])){
		if(b[i] > a[i]){
			char *temp = *a;
			*a = *b;
			*b = temp;
			break;
		}
		else if(a[i] == b[i])
			dictional_sort(a, b, ++i);
	}
}

int main(int argc, char *argv[]){
	for(int i = 1;i < argc - 1;i++){
		dictional_sort(&argv[i], &argv[i + 1], 1);
	}
	printf("%s\n%s\n%s\n", argv[1], argv[2], argv[3]);
	return 0;
}