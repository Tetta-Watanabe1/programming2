CC = gcc
BIN = show_month_number
SRC = $(BIN).c
README = README_$(BIN).html
YEAR = 2025

%: %.c
	@echo 次のコマンドを実行して $< をコンパイルしてください．
	@echo gcc -Wall -o $@ $<
	@exit 1

test: history-test $(BIN)
	@if [ -f tests/test-special.sh ] ; then \
	    cd tests; bash test-special.sh $(BIN) | tee test-results.txt 2>&1 ; \
	else \
	    cd tests; bash test.sh $(BIN) | tee test-results.txt 2>&1 ; \
	fi
	@echo >> tests/history.txt
	@tail -n 3 tests/test-results.txt >> tests/history.txt
	@cp -f tests/history.txt $(BIN)-test-history.txt

clean:
	rm -f $(BIN) $(BIN)*.exe
	rm -f tests/*.out $(BIN)-test-history.txt tests/$(BIN)_prev.c tests/history.txt

clean-old:
	# ls | grep $(BIN) | grep -v -F -e .c -e .pdf -e .txt | xargs rm

FORMATTER = $(shell which clang-format)
ifeq ($(strip $(FORMATTER)),)
	CLANG_VER = -3.5
else
	CLANG_VER = 
endif

format: history-format
	clang-format$(CLANG_VER) -i $(SRC)

readme:
	cygstart $(README)

readmemac:
	open $(README)

history-test:
	@if [ ! -f tests/history.txt ] ; then echo \# $(YEAR) > tests/history.txt ; fi
	@echo >> tests/history.txt
	@echo \# test >> tests/history.txt
	@if [ -f tests/$(BIN)_prev.c ] ; then ( \
	    echo \$ diff -ubs 直前の$(BIN).c $(BIN).c; \
	    diff -ubs tests/$(BIN)_prev.c $(BIN).c; \
	    cp -f $(BIN).c tests/$(BIN)_prev.c )  >> tests/history.txt; \
	else ( \
	    echo \$ ls -l $(BIN).c\; cat $(BIN).c; \
	    ls -l $(BIN).c; \
	    cat $(BIN).c; \
	    cp -f $(BIN).c tests/$(BIN)_prev.c; )  >> tests/history.txt; \
	fi

history-format:
	@if [ ! -f tests/history.txt ] ; then echo \# $(YEAR) > tests/history.txt ; fi
	@echo >> tests/history.txt
	@echo \# format >> tests/history.txt
	@echo $$ clang-format$(CLANG_VER) -i $(SRC) >> tests/history.txt

-include ../scripts/Makefile.staff # 課題作成用
