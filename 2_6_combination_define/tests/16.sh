# auto=true
src=$cmdOrig.c
opt=-DVERBOSE     # コンパイルオプション
cmd=${cmdOrig}_verbose # 実行ファイル名
. compile.sh
