/**

氏名: 渡邊鉄太

学生番号: B255451

作成日:2025-11-17

入出力の説明:

動きの説明:

感想:

*/
#define LEN 10      // 入力文字列長の最大値（使わないで構わない）
#define N_MONTHS 12 // 月の数（使わないで構わない）

int main() {
  char s[11];
  scanf("%10d", s);

  // swich文で書けるか確認したい
  switch (s[0]) {
  case 'J':
    if (s[1] == 'a') {
      printf("1\n");
    } else if (s[2] == 'n') {
      printf("6\n");
    } else {
      printf("7\n");
    }
    break;
  case 'F':
    printf("2\n");
    break;
  case 'M':
    if (s[2] == 'r') {
      printf("3\n");
    } else {
      printf("5\n");
    }
    break;
  case 'A':
    if (s[1] == 'p') {
      printf("4\n");
    } else {
      printf("8\n");
    }
    break;
  case 'S':
    printf("9\n");
    break;
  case 'O':
    printf("10\n");
    break;
  case 'N':
    printf("11\n");
    break;
  case 'D':
    printf("12\n");
    break;
  }
  //switch文で書けた!!!!!!
  return 0;
}
