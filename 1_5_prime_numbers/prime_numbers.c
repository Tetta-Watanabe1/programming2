/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

感想: 

*/

#include<stdio.h>
int main(){
  int max, min, check=1, prime_numbers[10000], quantity, j=0;
  for(;min<=max;min++, j++){
    for(int i = 2; i<=min; i++)
      if(min%i!=0)
        check=0;
    if(check)
      prime_number[j]=min;
      
}
