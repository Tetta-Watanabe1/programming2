/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

感想: 

*/
void dictional_sort(char *a, char *b, int i){

	while((a[i] == '\0' || b[i] == '\0') || (a[i] > b[i])){
		if(b[i] > a[i]){
			char *temp = a;
			a = b;
			b = temp;
		}
		else if(a[i] == b[i])
			dictional_sort(a, b, ++i);
	}

	i++;
}

int main(int argc, char *argv[]){
	for(int i = 1;i < argc - 1;i++)
		dictional_sort(argv[i], argv[i + 1], 1);

	return 0;
}