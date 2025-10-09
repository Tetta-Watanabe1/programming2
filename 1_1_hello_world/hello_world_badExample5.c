/**
Segmentation fault: 11 する例．

make testだと次のようにSegmentation faultの表示になる．
	$ make test
	==== テスト 1 (Test case 1) ====
	$ ./hello_world
	test.sh: line 27: 36188 Segmentation fault: 11  ../$cmd $args > $i.out 2>&1
	テスト 1 失敗（failed）

通常実行
	$ ./hello_world
	Hello world!
	Hello world!
	Hello world!
	Segmentation fault: 11

*/
#include <stdio.h>

int main() {
  int i = 0;
  int a[10];

  printf("Hello world!\n");
  printf("Hello world!\n");
  printf("Hello world!\n");
  for (i = 1; i < 10000; i++) {
    a[i] = i;
  }
  printf("Hello world!\n");
  printf("Hello world!\n");
  printf("Hello world!\n");
  return 0;
}
