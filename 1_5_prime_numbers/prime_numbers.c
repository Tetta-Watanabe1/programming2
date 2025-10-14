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
  int max, min, check, prime_numbers[10000], quantity, i, j = 0;
  scanf("%d", &min);
  scanf("%d", &max);
  for (; min <= max; min++) {
    check = 1;
    for (i = 2; i < min; i++)
      if ((min % i) == 0)
        check = 0;
    if (check) {
      prime_numbers[j] = min;
      j++;
    }
  }
  for (i = 0; i < j; i++)
    printf("%d\n", prime_numbers[i]);
}
