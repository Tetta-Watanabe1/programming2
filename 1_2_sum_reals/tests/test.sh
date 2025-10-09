#!/bin/bash

cmdOrig=$1

# $cmd の動作を確認するスクリプト．
# 1.in      ... 標準入力
# 1.args    ... コマンドライン引数
# 1.out     ... 学生のプログラムの出力先
# 1.correct ... 正しい標準出力（1.out と 1.correct が一致すればテスト成功）
# 1の部分はテストケースの番号．
# テストケースの番号は 1 から順に 10 くらい．いくつでも．

if [ -d tests ] ; then cd tests; fi

if [ ! -f ../$cmdOrig ] ; then
    echo "Error.  File \"$cmd\" does not exist."
    exit 1
fi

npassed=0
n=0
cases=`ls *.in *.args 2> /dev/null |sed 's/.in$//;s/.args$//'|uniq|sort -n` # 昇順
for i in $cases ; do
    n=$(( $n + 1 ))
    if [ -f $i.sh ] ; then
	. $i.sh
    else
	cmd=$cmdOrig
    fi
    if [ -f ../$cmd ] ; then
	if [ -f $i.args ] ; then
	    args=`cat $i.args`
	else
	    args=
	fi
	if [ -f $i.in ] ; then
	    if [ `cat $i.in | wc -l` -le 5 ] ; then
		input="short"
	    else
		input="long"
 	    fi
	    cat $i.in | ../$cmd $args > $i.out 2>&1
	else
	    input="nothing"
	    ../$cmd $args > $i.out 2>&1
	fi
	lines=`diff -ub $i.correct $i.out | wc -l`
	if [ $lines -eq 0 -a -f $i.out -a -f $i.correct ] ; then
	    echo テスト $i 成功（pass）
	    npassed=$(( npassed + 1 ))
	else
	    echo テスト $i 失敗（failed）
	    if [ X$DIFFOUT == X ]; then # 学生のところの動作
		echo テストの内容は README_${cmd}.html のテスト一覧を見なさい．
	        # if [ $OS == Windows_NT ] ; then # Cygwinだと信じて
		#     cygstart ../README_${cmd}.html
		# fi
		if [ X$TERM_PROGRAM == X"Apple_Terminal" ] ; then # macOS
		    open ../README_${cmd}.html
		fi
		break
	    else # 評価用（DIFFOUT=trueなど）
		diff -ub $i.correct $i.out
	    fi
	fi
    fi
    i=$(( $i + 1 ))
done

if [ $n -eq 0 ] ; then
    echo "テストがありません．(No test case)"
elif [ $n -eq $npassed ] ; then
    echo "すべてのテストに成功しました．($npassed)"
else
    # echo
    # if [ $npassed -gt 0 ] ; then
    # 	echo "$(( $npassed ))個のテストは成功しましたが，"
    # fi
    # echo "テスト $i に失敗しました． (A test case is failed)"
    echo "プログラムを確認してください．($npassed)"
fi
