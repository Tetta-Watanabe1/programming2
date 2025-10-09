CC = gcc
BIN = hello_world
SRC = $(BIN).c

%: %.c
	@echo 次のコマンドを実行して $< をコンパイルしてください．
	@echo gcc -Wall -o $@ $<
	@exit 1

test: $(BIN)
	@echo >> $(BIN)-test-history.txt
	@echo \# `date` `uname -srvmo` >> $(BIN)-test-history.txt
	@if [ -f tests/$(BIN)_prev.c ] ; then ( \
	    echo \$ diff -ubs 直前の$(BIN).c $(BIN).c; \
	    diff -ubs tests/$(BIN)_prev.c $(BIN).c; \
	    cp -p $(BIN).c tests/$(BIN)_prev.c )  >> $(BIN)-test-history.txt; \
	else ( \
	    echo \$ ls -l $(BIN).c; cat $(BIN).c; \
	    ls -l $(BIN).c; \
	    cat $(BIN).c; \
	    cp -p $(BIN).c tests/$(BIN)_prev.c; ) >> $(BIN)-test-history.txt; \
	fi
	@if [ -f tests/test-special.sh ] ; then \
	    cd tests; bash test-special.sh $(BIN) | tee test-results.txt 2>&1 ; \
	else \
	    cd tests; bash test.sh $(BIN) | tee test-results.txt 2>&1 ; \
	fi
	@echo >> $(BIN)-test-history.txt
	@cat tests/test-results.txt >> $(BIN)-test-history.txt

clean:
	rm -f $(BIN) $(BIN)*.exe # ls | grep $(BIN) | grep -v -F -e .c -e .pdf -e .txt | xargs rm
	rm -f tests/*.out tests/test-results.txt

FORMATTER = $(shell which clang-format)
ifeq ($(strip $(FORMATTER)),)
	CLANG_VER = -3.5
else
	CLANG_VER = 
endif

format:
	clang-format$(CLANG_VER) -i $(SRC)

-include ../scripts/Makefile.staff # 課題作成用
