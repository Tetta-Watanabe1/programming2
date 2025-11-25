/**

氏名: 

学生番号: 

作成日: 

入出力の説明: 

動きの説明: 

このプログラムで解ける問題：

（例）
023456789 406789103 780123456
234507890 567091234 891230567
345678910 678902045 910345608

感想: 

*/
#include <stdio.h>

// fill_row関数の定義
void fill_row(int row[]) {
  // 動作を確認したらこの関数本体は削除しなさい．
  int j;
  printf("fill_row: ");
  for (j = 0; j < 9; j++)
    printf("%d ", row[j]);
  printf("\n");
}

// sudoku_print関数の定義

int main() {
  int grid[9][9];
  int i, j;

  // 標準入力の盤面を配列grid[][]に格納する．

  // 数字を入れる前の盤面を出力する
  sudoku_print(grid);

  // 上の行から1行ずつ数字を入れらるマスを探して入れる
  for(i = 0; i < 9; i++) {
    fill_row(grid[i]);
  }

  // 数字を入れた後の盤面を出力する
  sudoku_print(grid);

  return 0;
}

