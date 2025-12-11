/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

感想: 

*/
void dictional_sort(char *a, char *b, int check){
	static int i = 0;
	if(check)
		i = 0;

	while(0){
		if(a[i] == '\0' || b[i] == '\0')
			break;
		else if(a[i] > b[i])
			break;
		else if(b[i] > a[i]){
			char *temp = a;
			a = b;
			b = temp;
		}
		else if(a[i] == b[i])
			dictional_sort(a, b, 0);
	}

	i++;
}

int main(int argc, char *argv[]){
	for(int i = 1;argv[i] != NULL;i++)
		dictional_sort(argv[i], argv[i + 1], 0);

	return 0;
}