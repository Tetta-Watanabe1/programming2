# コンパイルオプションが必要なときのスクリプト

# 例：1.sh
# src=$cmdOrig.c
# opt=           # コンパイルオプション
# cmd=${cmdOrig} # 実行ファイル名
# . compile.sh

if [ X$auto == X ] ; then
    if [ ! -f ../$cmd -o ../$cmd -ot ../$src ] ; then
	cat <<EOF
テスト $i を実行するには $cmd が必要です．
次のコマンドを実行して $src をコンパイルしてください．
gcc -Wall $opt -o $cmd $src
EOF
	exit
    fi
else
    if [ ! -f ../$cmd -o ../$cmd -ot ../$src ] ; then
	(
	    cd ..
	    echo gcc $opt -o $cmd $src
	    gcc $opt -o $cmd $src
	)
    else
	ls -l ../$cmd
    fi
fi
